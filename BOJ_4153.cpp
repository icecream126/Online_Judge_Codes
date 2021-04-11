#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a=1, b=1, c=1;
	while (1) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			return 0;

		a = pow(a, 2);
		b = pow(b, 2);
		c = pow(c, 2);

		if (a + b == c || b + c == a || c + a == b)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}