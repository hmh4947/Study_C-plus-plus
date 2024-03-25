#include<iostream>
#include<string>
using namespace std;

int main2() {
	string *names;
	int i;

    cout << "몇 개의 이름을 입력 하시겠습니까? ";
    cin >> i;
    cin.ignore();
    names = new string[i];

    for (int n = 0; n < i; n++) {
        cout << "이름 입력 # "<<n+1<<" : ";
        cin >> names[n];
    }
    cout << endl;

    cout << "다음은 이름 목록입니다."<<endl;
    for (int n = 0; n < i; n++) {
        cout <<"이름 #"<<n+1<< ": " << names[n] << endl;

    }
    delete[] names;
    return 0;
	
}