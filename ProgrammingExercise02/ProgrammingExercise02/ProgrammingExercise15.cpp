#include<iostream>
#include<stdlib.h> //rand(),srand()
#include<ctime> //time()
using namespace std;
int main15() {
	
	int p_num;
	int c_num;
	int win=0;
	
	srand(time(NULL)); // �� ����ø��� �ٸ� �� ��� 
	c_num = rand()%3+1; //1~3 ������ ���� ����

	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3): ";
	cin >> p_num;
	
	cout << "��ǻ��: " << c_num << endl;


	if (p_num == 1) {// �÷��̾�: ����

		if (c_num == 1) { //��ǻ��: ����
			win = 3;
		}
		if (c_num == 2) { //��ǻ��: ����
			win = 2;
		}
		
		if (c_num == 3) { //��ǻ��: ��
			win = 1;
		}
	}
	if (p_num == 2) {// �÷��̾�: ����
		if (c_num == 1) { //��ǻ��: ����
			win = 1;
		}
		if (c_num == 2) { //��ǻ��: ����
		
			win = 3;
		}
		if (c_num == 3) { //��ǻ��: ��

			win = 2;
		}
		
	}
	if (p_num == 3) {// �÷��̾�: ��
		if (c_num == 1) { //��ǻ��: ����

			win = 2;
		}

		if (c_num == 2) { //��ǻ��: ����
			win = 1;
		}
		if (c_num == 3) { //��ǻ��: ��

			win = 3;
		}
	}


	if (win == 1) {
		cout << "�÷��̾� ��!";
	}
	if(win==2){
		cout<< "��ǻ�� ��!";
		
	}
	if (win == 3) {
		cout << "�����ϴ�!";

	}
	
	return 0;
}