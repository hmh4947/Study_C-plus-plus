#include<iostream>
#include<string>
using namespace std;

int main2() {
	string *names;
	int i;

    cout << "�� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
    cin >> i;
    cin.ignore();
    names = new string[i];

    for (int n = 0; n < i; n++) {
        cout << "�̸� �Է� # "<<n+1<<" : ";
        cin >> names[n];
    }
    cout << endl;

    cout << "������ �̸� ����Դϴ�."<<endl;
    for (int n = 0; n < i; n++) {
        cout <<"�̸� #"<<n+1<< ": " << names[n] << endl;

    }
    delete[] names;
    return 0;
	
}