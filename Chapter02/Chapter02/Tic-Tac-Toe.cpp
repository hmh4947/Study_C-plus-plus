#include <iostream>
using namespace std;

int main26() {
	char board[3][3];
	int x, y, k, i;
	int c_x, c_y;

	
	//보드 초기화
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++) {
			board[x][y] = ' ';
		}
	}
	for (k = 0; k < 9; k++) {

		//사람
		if (k % 2 == 0) {
			cout << "(x, y) 좌표: ";
			cin >> x >> y;

			if (board[x][y] == ' ') {
				board[x][y] = 'O';
			}
		}

		//컴퓨터
		else {

			c_x = rand() % 3;
			c_y = rand() % 3;
			if (board[c_x][c_y] == ' ') {
				board[c_x][c_y] = 'X';
			}
			else {
				if (board[0][0] != ' ' && board[1][1] == ' ') {
					board[1][1] = 'X';

				}
				if (board[0][2] != ' ' && board[1][1] == ' ') {
					board[1][1] = 'X';
				}
				if (board[2][0] != ' ' && board[1][1] == ' ') {
					board[1][1] = 'X';
				}
				if (board[2][2] != ' ' && board[1][1] == ' ') {
					board[1][1] = 'X';
				}
			}
			
		

		}
		
		//보드판
		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;


		//승리 체크
		//대각선 체크
		if (board[0][0] == 'O' && board[1][1]== 'O' && board[2][2] == 'O'){
			cout << "[플레이어의 승리!]" << endl;
			return 0;
		}
		if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
			cout << "[플레이어의 승리!]" << endl;
			return 0;
		}
		if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
			cout << "[컴퓨터의 승리!]" << endl;
			return 0;
		}
		if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
			cout << "[컴퓨터의 승리!]" << endl;
			return 0;
		}

		//가로세로 체크
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O' )
			{
				cout << "[플레이어의 승리!]" << endl;
				return 0;
			}
			if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') {
				cout << "[컴퓨터의 승리!]" << endl;
				return 0;
			}
		}

	}
	
}
	
		
	


