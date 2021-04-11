#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int loop, symbol, index=0;
	double num;
	char math[101];
	cin >> loop;
	for (int i = 0; i < loop; i++) {
		cin >> num;
		while (1) {
			cin >> symbol;
			if (symbol == '\n')
				break;
			else {
				math[index] = symbol;//¿¡·¯
				index++;
			}
		}
		for (int j = 0; j < index; j++) {
			if (math[j] == '@')
				num *= 3;
			else if (math[j] == '%')
				num += 5;
			else if (math[j] == '#')
				num -= 7;
		}
		printf("%.2lf\n", num);
	}
}