#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#define MAX 1001
using namespace std;
int b[MAX] = { 0, };//������� ���� �迭
bool v[MAX];//�湮 Ȯ�� �뵵
vector<int>a[MAX];
int N, M;//N : ������ ��, M : ���� ����
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
		fill(v, v + MAX, false);//�湮 ��� ���� false�� ó��
		if (dfs(i)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}