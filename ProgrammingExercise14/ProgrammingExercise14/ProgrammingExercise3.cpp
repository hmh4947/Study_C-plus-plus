#include<iostream>
#include<string>
#include<vector>
using namespace std;

//게임에서 나타나는 스프라이트를 나타내는 클래스이다.
class Sprite {
protected:
	int x, y;
	char shape;
public:
	Sprite(int x, int y, char shape) :x(x), y(y), shape(shape) {}
	virtual ~Sprite() {}
	virtual void move(char d) = 0;
	char getShape() { return shape; }
	int getX() { return x; }
	int getY() { return y; }

	//다른 스프라이트와의 충돌 여부를 계산한다. 충돌이면 true를 반환한다.
	bool checkCollision(Sprite* other) {
		if (x == other->getX() && y == other->getY())
			return true;
		else
			return false;
	}
};

//주인공 스프라이트를 나타낸다.
class Hero :public Sprite {
public:
	Hero(int x, int y) :Sprite(x, y, 'H') {}
	void draw() { cout << 'H'; }
	void move(char d) {
		if (d == 'a') { x -= 1; }
		else if (d == 'w') { y -= 1; }
		else if (d == 's') { y += 1; }
		else if (d == 'd') { x += 1; }
	
	}
	void move(int i) {
		
		this->x = x;
		this->y = y;
		
	}
	
};

//보물을 나타내는 클래스이다.
class Treasure : public Sprite {
public:
	Treasure(int x, int y) :Sprite(x, y, 'T') {}
	void move(char d) {}
	void move(int i) {}
};

class Enemy :public Sprite {
public:
	Enemy(int x, int y) :Sprite(x, y, 'E') {}
	void move(char d) {
		if (rand() % 5 == 0) {
			x -= 1;
		}
		if (rand() % 5 == 1) {
			y -= 1;
		}
		if (rand() % 5 == 2) {
			y += 1;
		}
		if (rand() % 5 == 3) {
			x += 1;
		}
		if (rand() % 5 == 4) {
			this->x = x;
			this->y = y;
		}
	}
	void move(int i) {

		this->x = x;
		this->y = y;
	

	}
};

//게임 보드를 표시한다.
class Board {
	char* board;
	int width, height;
public:
	Board(int w, int h) :width(w), height(h) {
		board = new char[width * height];
		clearBoard();

	}
	~Board() {
		delete board;
	}

	void setValue(int r, int c, char shape) {
		board[r * width + c] = shape;

	}
	void printBoard() {
		for (int i = 0; i < height; i++) {
			cout << "\t";
			for (int j = 0; j < width; j++)
				cout << board[i * width + j];
			cout << endl;
		}
	}
	void clearBoard() {
		for (int i = 0; i < height; i++)
			for (int j = 0; j < width; j++)
				board[i * width + j] = '.';

	}
};
void drawLine(char x) {
	cout << endl;
	for (int i = 0; i < 100; i++) {
		cout << x;

	}
	cout << endl;

}
int main3() {
	//벡터를 사용하여 게임에서 나타나는 모든 스프라이트들을 저장한다.
	//다형성을 사용해야 하므로 포인터를 벡터에 저장한다.
	//다형성은 포인터를 이용해야 사용할 수 있음을 잊지 말자.
	vector<Sprite*>list;
	int width, height;

	try {
		cout << "보드의 크기를 입력하시오[최대 10X10]: " << endl;
		cout << "가로: ";
		cin >> width;

		cout << "세로: ";
		cin >> height;
		if (width > 10 || width < 1 || height>10 || height < 1) {
			throw width;
			throw height;
		}

		Board board( width,height);
		list.push_back(new Hero(0, 0));
		list.push_back(new Treasure( width - 1, height - 1));
		list.push_back(new Enemy(3, 3));


		//게임 설명을 출력한다.
		drawLine('*');
		cout << "이 게임의 목표는 적(E)을 만나지 않고 보물(T)에 도달하는 것이다. ";
		cout << "주인공은 a,s,w,d 키를 이용하여 움직일 수 있다. " << endl;
		drawLine('*');
		cout << endl;

		//게임 루프이다.
		while (true) {
			//보드를 다시 그린다.
			board.clearBoard();
			for (auto& e : list)
				board.setValue(e->getY(), e->getX(), e->getShape());
			board.printBoard();


			
			//사용자의 입력을 받는다.
			char direction;

			cout << "어디로 움직일까요(a,s,w,d): ";
			cin >> direction;
			if (direction == 'a' || direction == 's' || direction == 'w' || direction == 'd') {
			
				for (auto& e : list)

					e->move(direction);
				drawLine('-');
				
			}
			else {
				cout << "오직 a,s,w,d 키로만 움직일 수 있습니다." << endl;
			}
			for (auto& e : list) {
				if (e->getX() > width || e->getX() < 0 || e->getY() > height || e->getY() < 0) {
				
					cout << "보드를 벗어납니다." << endl;
				}

			}
			

			if (list[0]->checkCollision(list[2])) {
				cout << "Enemy와 충돌" << endl;
				break;
			}
			if (list[0]->checkCollision(list[1])) {
				cout << "보물을 획득했습니다" << endl;
				break;
			}
		}
	}
	catch (int e) {
		cout << "보드의 크기는 최대 10X10 입니다. " << endl;
	}
	//벡터 안의 모든 동적 할당을 해제한다.
	for (auto& e : list)
		delete e;
	list.clear();
	return 0;

}