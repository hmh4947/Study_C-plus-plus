#include<SFML/Graphics.hpp>
#include<Windows.h>
#include<string>
#include<vector>
#include<iostream>
using namespace sf;
using namespace std;

class LunarLander {
private:
	double x, y;
	double velocity;
	double fuel;
	string status;
	Texture t1, t2;
	Sprite spaceship, burst;
	Font font;
	Text text;
public:
	LunarLander(double h, double v, double f);
	bool checkLanded();
	void update(double rate, double xpos);
	void draw(RenderWindow& window);

};

LunarLander::LunarLander(double h, double v, double f)
{
	x = 300;
	y = h;
	velocity = v;
	fuel = f;
	t1.loadFromFile("image/spaceship.png");
	t2.loadFromFile("image/burst.png");
	spaceship.setTexture(t1);
	burst.setTexture(t2);
	spaceship.setPosition(x, y);
	burst.setPosition(x + 20, y + 50);
	if (!font.loadFromFile("tuffy.ttf")) {
		cout << "��Ʈ ������ ������ �� ����!" << endl;

	}
	text.setFont(font);

}

//�����ߴ����� �˻��ϴ� �Լ�. ���� ���̰� 0���� ������ ������ ���̴�.
bool LunarLander::checkLanded()
{
	if (y <= 0)
		return true;
	return false;

}

//���� ���¸� ������Ʈ�Ѵ�.
void LunarLander::update(double amount,double xpos)
{
	if (fuel <= 0) {
		fuel = 0;
		amount = 0;
	}
	fuel = fuel - amount;
	
	
	x = x + xpos;
	if(y!=450)
	{
		velocity = velocity - amount + 0.8;
		y = y + velocity;
	}
	if (y > 450)
		y = 450;
	spaceship.setPosition(x, y);
	burst.setPosition(x + 25, y + 150);
	status = "Press up key!\nheight: " + to_string(y) + "\nspeed: " + to_string(velocity) + "\nfuel: " + to_string(fuel);
	

	if (y == 450) {
		if (velocity < 10)
		{
			cout << "����" << endl;


		}
		else {
			cout << "����" << endl;
		}
	}
}
//ȭ�鿡 �������� �Ҳ�, ���� ���¸� �׸���.

void LunarLander::draw(RenderWindow& window)
{
	window.draw(spaceship);
	window.draw(burst);
	text.setString(status);
	text.setCharacterSize(20);
	text.setPosition(10, 100);
	window.draw(text);

}
int main3() {
	RenderWindow window(VideoMode(1200, 800), "LUNAR LANDER");
	window.setFramerateLimit(60);

	Texture t;
	Sprite background;
	t.loadFromFile("image/background.png");
	background.setTexture(t);

	LunarLander lander(300.0, 1.0, 100.0);



	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed)
				window.close();

		}
		if (Keyboard::isKeyPressed(Keyboard::Up))
			lander.update(3.0,0.0);
		if (Keyboard::isKeyPressed(Keyboard::Right))
			lander.update(0.0, 30.0);
		if (Keyboard::isKeyPressed(Keyboard::Left))
			lander.update(0.0, -30.0);
		else
			lander.update(0.0,0.0);

		window.clear();
		window.draw(background);
		lander.draw(window);

		window.display();

		Sleep(100);
	}
	return 0;
}





