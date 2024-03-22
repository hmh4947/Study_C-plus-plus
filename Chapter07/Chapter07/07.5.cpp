#include<SFML/Graphics.hpp>
using namespace sf;

int main2() {

	//그림이 그려지는 화면을 생성한다.
	RenderWindow window(VideoMode(600, 480), "LUNAR LANDER");
	window.setFramerateLimit(60);

	Texture t1;									//텍스처 객체
	Sprite background;							//스프라이트 객체
	t1.loadFromFile("image/sky.jpg");	//이미지를 텍스처 객체로 적재한다.
	background.setTexture(t1);					//스프라이트의 텍스처를 설정한다.

	//게임에 필요한 스프라이트를 생성한다.
	Texture t2;
	Sprite lander;
	t2.loadFromFile("image/cat.png");
	lander.setTexture(t2);

	//여기서부터 게임 루프이다.
	while (window.isOpen()) {
		
		//이벤트 검사 및 처리
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

		//화면을 지운다.
		window.clear();

		//화면에 스프라이트를 그린다.
		window.draw(background);
		window.draw(lander);

		//화면을 표시한다.
		window.display();
	}
	return 0;

}
