#include<iostream>
#include<string>
#include<vector>
using namespace std;

//���ӿ��� ��Ÿ���� ��������Ʈ�� ��Ÿ���� Ŭ�����̴�.
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

	//�ٸ� ��������Ʈ���� �浹 ���θ� ����Ѵ�. �浹�̸� true�� ��ȯ�Ѵ�.
	bool checkCollision(Sprite* other) {
		if (x == other->getX() && y == other->getY())
			return true;
		else
			return false;
	}
};

//���ΰ� ��������Ʈ�� ��Ÿ����.
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

//������ ��Ÿ���� Ŭ�����̴�.
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

//���� ���带 ǥ���Ѵ�.
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
	//���͸� ����Ͽ� ���ӿ��� ��Ÿ���� ��� ��������Ʈ���� �����Ѵ�.
	//�������� ����ؾ� �ϹǷ� �����͸� ���Ϳ� �����Ѵ�.
	//�������� �����͸� �̿��ؾ� ����� �� ������ ���� ����.
	vector<Sprite*>list;
	int width, height;

	try {
		cout << "������ ũ�⸦ �Է��Ͻÿ�[�ִ� 10X10]: " << endl;
		cout << "����: ";
		cin >> width;

		cout << "����: ";
		cin >> height;
		if (width > 10 || width < 1 || height>10 || height < 1) {
			throw width;
			throw height;
		}

		Board board( width,height);
		list.push_back(new Hero(0, 0));
		list.push_back(new Treasure( width - 1, height - 1));
		list.push_back(new Enemy(3, 3));


		//���� ������ ����Ѵ�.
		drawLine('*');
		cout << "�� ������ ��ǥ�� ��(E)�� ������ �ʰ� ����(T)�� �����ϴ� ���̴�. ";
		cout << "���ΰ��� a,s,w,d Ű�� �̿��Ͽ� ������ �� �ִ�. " << endl;
		drawLine('*');
		cout << endl;

		//���� �����̴�.
		while (true) {
			//���带 �ٽ� �׸���.
			board.clearBoard();
			for (auto& e : list)
				board.setValue(e->getY(), e->getX(), e->getShape());
			board.printBoard();


			
			//������� �Է��� �޴´�.
			char direction;

			cout << "���� �����ϱ��(a,s,w,d): ";
			cin >> direction;
			if (direction == 'a' || direction == 's' || direction == 'w' || direction == 'd') {
			
				for (auto& e : list)

					e->move(direction);
				drawLine('-');
				
			}
			else {
				cout << "���� a,s,w,d Ű�θ� ������ �� �ֽ��ϴ�." << endl;
			}
			for (auto& e : list) {
				if (e->getX() > width || e->getX() < 0 || e->getY() > height || e->getY() < 0) {
				
					cout << "���带 ����ϴ�." << endl;
				}

			}
			

			if (list[0]->checkCollision(list[2])) {
				cout << "Enemy�� �浹" << endl;
				break;
			}
			if (list[0]->checkCollision(list[1])) {
				cout << "������ ȹ���߽��ϴ�" << endl;
				break;
			}
		}
	}
	catch (int e) {
		cout << "������ ũ��� �ִ� 10X10 �Դϴ�. " << endl;
	}
	//���� ���� ��� ���� �Ҵ��� �����Ѵ�.
	for (auto& e : list)
		delete e;
	list.clear();
	return 0;

}