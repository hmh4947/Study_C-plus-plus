#include<iostream>

using namespace std;
int main4() {
	int num[5];
	for (int i = 0; i < 5; ++i) {
		cout << "������ �Է��ϼ���: ";
		cin >> num[i];
	}

	if (num[0] == 5 || num[1] == 5|| num[2] == 5|| num[3] == 5|| num[4]== 5) {
		
		cout << "5�� �Է��Ͽ�����! ��ǻ�� ��" << endl;
	}
	else {

		cout << "�γ����� ���մϴ�. ����� ��" << endl;
	}
	return 0;	
}
