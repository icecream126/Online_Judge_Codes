#include <iostream>
#include <queue>
using namespace std;
queue<int>q;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	if (q.size() == 1) {
		printf("1");
		return 0;
	}
	while (1) {
		q.pop();
		if (q.size() == 1)
			break;
		else {
			q.push(q.front());
			q.pop();
		}
	}
	int ans = q.front();
	printf("%d", ans);
}