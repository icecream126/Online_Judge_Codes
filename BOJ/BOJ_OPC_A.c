#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int size, sPos, pPos;
	scanf("%d", &size);
	int** pos = (int**)malloc(sizeof(int*) * size);
	*pos = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", &pos[i][j]);
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", &pos[i][j]);
		}
		printf("\n");
	}
}