#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void findParent(int num, int start, int **Graph);

int main() {
	int num, a, b;
	int** Graph = (int**)malloc(sizeof(int*));
	scanf("%d", &num);
	Graph = (int**)realloc(Graph, sizeof(int*) * num);
	for (int i = 0; i < num; i++) {
		Graph[i] = (int*)calloc(num,sizeof(int));
	}
	for (int i = 0; i < num - 1; i++) {
		scanf("%d %d", &a, &b);
		Graph[a - 1][b - 1] = 1;
		Graph[b - 1][a - 1] = 1;
	}
	findParent(num,1,Graph);
}
void findParent(int num, int start, int**Graph) {
	int* visited = (int*)calloc(num, sizeof(int));
	int* parent = (int*)malloc(sizeof(int) * num);
	int next;
	visited[start-1] = 1;
	for (int i = 0; i < num; i++) {
		if(Graph[start-1][i]==1)
			next = i+1;
		if (visited[next-1] != 1) {
			parent[next] = start;
			findParent(num, next, Graph);
		}
	}
	for (int i = 0; i < num; i++) {

	}
}