#include<iostream>
using namespace std;

int main16() {
	char ch;
	int vowel = 0;
	int consonant=0;
	int b_vowel = 0;
	int b_consonant = 0;
	cout << "영문자를 입력하고 콘트롤-Z를 치세요" << endl;
	
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
	cout << "소문자 모음: " << vowel << endl;
	cout << "소문자 자음: " << consonant << endl;
	cout << "대문자 모음: " << b_vowel << endl;
	cout << "대문자 자음: " << b_consonant << endl;
	return 0;
}