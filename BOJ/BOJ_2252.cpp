#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>
#define MAX 32001

using namespace std;
int inDegree[MAX], result[MAX];
vector<int>a[MAX];
int N, M;

void topology() {
	queue<int>q;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0)
			q.push(i);
	}
	for (int i = 1; i <= N; i++) {
		/*if (q.empty()) {
		printf("사이클이 생겼다구");
		return;
	}*/
		int x = q.front();
		result[i] = x;
		q.pop();
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j];
			inDegree[y]--;
			if (inDegree[y] == 0)
				q.push(y);
		}
	}
	for (int i = 1; i <= N; i++)
		printf("%d ", result[i]);
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		int front, back;
		scanf("%d %d", &front, &back);
		a[front].push_back(back);
		inDegree[back]++;
	}
	topology();
}