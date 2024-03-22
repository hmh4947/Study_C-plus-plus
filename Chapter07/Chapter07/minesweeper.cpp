#include<iostream>
#include<string>
#include<time.h>
#include<SFML/Graphics.hpp>

using namespace sf;
using namespace std;

//격자의 하나의 사각형을 나타낸다.
class Tile {
public:
	bool open;
	int number;

};
const int TILE_SIZE = 35;

//사각형의 상태를 나타낸다.
const int BOMB = 9;
const int HIDDEN = 10;

int main5() {
	srand(time(NULL));
	RenderWindow app(VideoMode(800, 800), "Minesweeper");

	//게임보드를 grid[][] 배열로 나타낸다.
	Tile grid[12][12];
	bool game_ended = false;

	//12개의 텍스처와 스프라이트를 생성한다.
	Sprite sprites[12];
	Texture t[12];
	for (int k = 0; k < 12; k++) {
		t[k].loadFromFile("image/" + to_string(k) + ".png");
		sprites[k].setTexture(t[k]);

	}
	//게임보드에 지뢰를 저장한다.
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			grid[i][j].open = false;
			grid[i][j].number = 0;
			if ((rand() % 10) == 1) {
				grid[i][j].number = BOMB;
			}
		}
	}

	//게임보드에 인근지뢰의 개수를 계산하여 저장한다.
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int n = 0;
			if (grid[i][j].number == BOMB)	continue;
			if (grid[i+1][j].number == BOMB) n++;
			if (grid[i][j+1].number == BOMB) n++;
			if (grid[i-1][j].number == BOMB) n++;
			if (grid[i][j-1].number == BOMB) n++;

			if (grid[i+1][j+1].number == BOMB) n++;
			if (grid[i-1][j-1].number == BOMB) n++;
			if (grid[i-1][j+1].number == BOMB) n++;
			if (grid[i+1][j-1].number == BOMB) n++;
			grid[i][j].number = n;

		}
	}

	while (app.isOpen()) {
		//마우스가 놓인 사각형의 번호를 계산한다.
		Vector2i pos = Mouse::getPosition(app);
		int x = pos.x / TILE_SIZE;
		int y = pos.y / TILE_SIZE;

		//윈도우 이벤트를 처리한다.
		Event e;
		while (app.pollEvent(e)) {
			if (e.type == Event::Closed)
				app.close();
			//왼쪽 마우스 버튼이 눌렸으면 해당 사각형에 표시한다.
			if (e.type == Event::MouseButtonPressed)
				if (e.key.code == Mouse::Left) {
					grid[x][y].open = true;
					if (grid[x][y].number == BOMB)	game_ended = true;

				}

		}

		//게임 보드를 화면에 그린다.
		app.clear(Color::White);
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				int n;
				//사각형의 상태에 따라 이미지를 지정하여 화면에 그린다.
				if (grid[i][j].open == false && game_ended == false)
					n = HIDDEN;
				else
					n = grid[i][j].number;
				sprites[n].setPosition(TILE_SIZE * i, TILE_SIZE * j);
				app.draw(sprites[n]);

			}
		}
		app.display();

	}
	return 0;
}