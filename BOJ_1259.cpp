#include <iostream>

using namespace std;

int main() {
	string input;
	bool flag = false;
	while (1) {
		flag = false;
		cin >> input;
		if (input!="0") {
			for (int i = 0; i < input.length(); i++) {
				if (input[i] != input[input.length() - i - 1]) {
					cout << "no\n";
					flag = true;
					break;
				}
				else if (i == input.length() - i - 1) {
					cout << "yes\n";
					flag = true;
				}

			}
			if(flag==false)
				cout << "yes\n";
		}
		else {
			return 0;
		}
	}
}