#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	queue<int>q;
	vector<int>v;
	int testNum, N, M, max=0, cnt=0, tmp;
	int* priority;
	scanf("%d", &testNum);
	for (int i = 0; i < testNum; i++) {
		scanf("%d %d", &N, &M);
		for (int j = 0; j < N; j++) {
			scanf("%d", tmp);
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());

	}
}