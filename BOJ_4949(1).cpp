#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	stack<char>st;
	string str;
	bool flag = true;
	while (1) {
		//스택 초기화
		while (!st.empty())
			st.pop();
		getline(cin, str);
		//cout << str;
		if (str[0] == '.')
			return 0;
		for (int i = 0; i < str.length(); i++) {
			flag = true;
			if (str[i] == '(') {
				st.push('(');
			}
			else if (str[i] == ')') {
				if (!st.empty() && st.top() == '(')
					st.pop();
				else {
					cout << "no\n";
					flag = false;
					break;
				}
			}
			else if (str[i] == '[') {
				st.push('[');
			}
			else if (str[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
				else {
					cout<<"no\n";
					flag = false;
					break;
				}
			}
		}
		if (flag && st.empty()) {
			cout << "yes\n";
		}
		else if(flag&&!st.empty()){
			cout << "no\n";
		}
	}
}