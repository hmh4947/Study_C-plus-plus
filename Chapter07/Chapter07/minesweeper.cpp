#include<iostream>
#include<string>
#include<time.h>
#include<SFML/Graphics.hpp>

using namespace sf;
using namespace std;

//������ �ϳ��� �簢���� ��Ÿ����.
class Tile {
public:
	bool open;
	int number;

};
const int TILE_SIZE = 35;

//�簢���� ���¸� ��Ÿ����.
const int BOMB = 9;
const int HIDDEN = 10;

int main5() {
	srand(time(NULL));
	RenderWindow app(VideoMode(800, 800), "Minesweeper");

	//���Ӻ��带 grid[][] �迭�� ��Ÿ����.
	Tile grid[12][12];
	bool game_ended = false;

	//12���� �ؽ�ó�� ��������Ʈ�� �����Ѵ�.
	Sprite sprites[12];
	Texture t[12];
	for (int k = 0; k < 12; k++) {
		t[k].loadFromFile("image/" + to_string(k) + ".png");
		sprites[k].setTexture(t[k]);

	}
	//���Ӻ��忡 ���ڸ� �����Ѵ�.
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			grid[i][j].open = false;
			grid[i][j].number = 0;
			if ((rand() % 10) == 1) {
				grid[i][j].number = BOMB;
			}
		}
	}

	//���Ӻ��忡 �α������� ������ ����Ͽ� �����Ѵ�.
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
		//���콺�� ���� �簢���� ��ȣ�� ����Ѵ�.
		Vector2i pos = Mouse::getPosition(app);
		int x = pos.x / TILE_SIZE;
		int y = pos.y / TILE_SIZE;

		//������ �̺�Ʈ�� ó���Ѵ�.
		Event e;
		while (app.pollEvent(e)) {
			if (e.type == Event::Closed)
				app.close();
			//���� ���콺 ��ư�� �������� �ش� �簢���� ǥ���Ѵ�.
			if (e.type == Event::MouseButtonPressed)
				if (e.key.code == Mouse::Left) {
					grid[x][y].open = true;
					if (grid[x][y].number == BOMB)	game_ended = true;

				}

		}

		//���� ���带 ȭ�鿡 �׸���.
		app.clear(Color::White);
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				int n;
				//�簢���� ���¿� ���� �̹����� �����Ͽ� ȭ�鿡 �׸���.
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