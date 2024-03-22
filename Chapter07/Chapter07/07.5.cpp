#include<SFML/Graphics.hpp>
using namespace sf;

int main2() {

	//�׸��� �׷����� ȭ���� �����Ѵ�.
	RenderWindow window(VideoMode(600, 480), "LUNAR LANDER");
	window.setFramerateLimit(60);

	Texture t1;									//�ؽ�ó ��ü
	Sprite background;							//��������Ʈ ��ü
	t1.loadFromFile("image/sky.jpg");	//�̹����� �ؽ�ó ��ü�� �����Ѵ�.
	background.setTexture(t1);					//��������Ʈ�� �ؽ�ó�� �����Ѵ�.

	//���ӿ� �ʿ��� ��������Ʈ�� �����Ѵ�.
	Texture t2;
	Sprite lander;
	t2.loadFromFile("image/cat.png");
	lander.setTexture(t2);

	//���⼭���� ���� �����̴�.
	while (window.isOpen()) {
		
		//�̺�Ʈ �˻� �� ó��
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed) {
				window.close();

			}
			
		}
		if (Keyboard::isKeyPressed(Keyboard::Left))
			lander.move(-10.0, 0.0);
		if (Keyboard::isKeyPressed(Keyboard::Right))
			lander.move(10.0, 0.0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			lander.move(0.0, -10.0);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			lander.move(0.0, 10.0);

		//ȭ���� �����.
		window.clear();

		//ȭ�鿡 ��������Ʈ�� �׸���.
		window.draw(background);
		window.draw(lander);

		//ȭ���� ǥ���Ѵ�.
		window.display();
	}
	return 0;

}
