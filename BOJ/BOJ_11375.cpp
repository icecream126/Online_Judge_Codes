#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#define MAX 1001
using namespace std;
int b[MAX] = { 0, };//점유노드 저장 배열
bool v[MAX];//방문 확인 용도
vector<int>a[MAX];
int N, M;//N : 직원의 수, M : 일의 개수
bool dfs(int start) {
	for (int i = 0; i < a[start].size(); i++) {
		int dest = a[start][i];
		if (v[dest])continue;
		v[dest] = true;
		if (b[dest] == 0 || dfs(b[dest])) {
			b[dest] = start;
			return true;
		}
	}
	return false;	
}
int main() {
	int cnt = 0;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		int work_num;
		scanf("%d", &work_num);
		for (int j = 1; j <= work_num; j++) {
			int work_no;
			scanf("%d", &work_no);
			a[i].push_back(work_no);
		}
	}
	for (int i = 1; i <= N; i++) {
		fill(v, v + MAX, false);//방문 노드 전부 false로 처리
		if (dfs(i)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}