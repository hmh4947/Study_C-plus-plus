#include<iostream>
#include<time.h>
#include<cstdlib>
#include<string>
using namespace std;

int main14() {
	int pos1, pos2;
	
	string anagram_q ="apple";
	string quest;
	string answer;
	char temp;
	srand(time(NULL));
	quest = anagram_q;
	pos1=rand() % anagram_q.size();
	while (1) {
		pos2 = rand() % anagram_q.size();
		if (pos1 != pos2) break;
	}
	temp= anagram_q[pos1];
	anagram_q[pos1] = anagram_q[pos2];
	anagram_q[pos2] = temp;
	

	while (true) {
		cout << anagram_q << "�� � �ܾ ��ũ����� ���ϱ��?";
		cin >> answer;

		if (quest == answer) {
			cout << "�����մϴ�.";
			break;
		}
	}
	return 0;
}