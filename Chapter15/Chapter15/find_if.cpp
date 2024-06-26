#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//문자열 s가 "김"을 포함하면 true를 반환
bool checkKim(string s) {
	if (s.find("김") != string::npos) {
		return true;
	}
	else {
		return false;

	}

}
int main18() {
	vector<string> vec = { "김철수","박문수","강감찬","김유신","이순신" };
	auto it = vec.begin();
	while (true) {
		it = find_if(it, vec.end(), checkKim);
		if (it == vec.end()) {
			break;
		}
		cout << "위치 " << distance(vec.begin(), it) << "에서 " << *it << "를 탐색하였음" << endl;
		it++;
	}
	return 0;
}