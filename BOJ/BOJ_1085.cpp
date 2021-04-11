#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int val1 = min(x - 0, w - x);
	int val2 = min(y - 0, h - y);
	cout << min(val1, val2);
}
