#include<iostream>
#include<vector>
using namespace std;

int main9(void) {
	vector<int> scores;
	int i, sum = 0;

	while (true) {
		int score;
		cout << "������ �Է��Ͻÿ�(����� -1) : ";
		cin >> score;
		if (score == -1)break;
		scores.push_back(score);

	}
	for (auto& value : scores) {
		sum += value;
	}
	double avg = (double)sum / scores.size();
	cout << "���� ���= " << avg << endl;
	return 0;
}