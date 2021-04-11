#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	stack <int> st;
	vector <int> v;
	vector <char> vc;

	int testCase;
	cin >> testCase;
	//수열 입력
	for (int i = 0; i < testCase; i++) {
		int series;
		cin >> series;
		v.push_back(series);
	}

	//스택 사용
	int vectorIndex = 0, num = 1;
	st.push(1);
	while (vectorIndex != testCase) {
		if (v[vectorIndex] == st.top()) {
			st.pop();
			vc.push_back('-');
			vectorIndex++;
		}
		else {
			if (v[vectorIndex] < num) {
				cout << "NO";
				return 0;
			}
			st.push(num);
			vc.push_back('+');
			num++;
		}
	}
	for (int i = 0; i < vc.size(); i++) {
		cout << vc[i]<<"\n";
	}
	return 0;
}