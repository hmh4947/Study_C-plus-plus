#include<iostream>
using namespace std;

int main16() {
	char ch;
	int vowel = 0;
	int consonant=0;
	int b_vowel = 0;
	int b_consonant = 0;
	cout << "�����ڸ� �Է��ϰ� ��Ʈ��-Z�� ġ����" << endl;
	
	while (cin >> ch) {
		if (ch >= 'a' && ch <= 'z') {
			switch (ch) {
				case 'a': case 'e': case 'i':case 'o': case 'u':
					vowel++; break;
				default:
					consonant++; break;
			}
		}
		if (ch >= 'A' && ch <= 'Z') {
			switch (ch) {
			case 'A': case 'E': case 'I':case 'O': case 'U':
				b_vowel++; break;
			default:
				b_consonant++; break;
			}
		}
	}
	cout << "�ҹ��� ����: " << vowel << endl;
	cout << "�ҹ��� ����: " << consonant << endl;
	cout << "�빮�� ����: " << b_vowel << endl;
	cout << "�빮�� ����: " << b_consonant << endl;
	return 0;
}