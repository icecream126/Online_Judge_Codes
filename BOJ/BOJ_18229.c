#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int height, width, dist;
	scanf("%d %d %d", &height, &width, &dist);
	int* arr2;
	arr2 = (int*)calloc(height,sizeof(int));//각 사람들의 거리 모두 0으로 초기화
	int** arr;
	arr= (int**)malloc(sizeof(int*) * height);
	for (int i = 0; i < height; i++) {
		arr[i] = (int*)malloc(sizeof(int) * width);
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			arr2[j] += arr[j][i];
			if (arr2[j] >= dist) {
				printf("%d %d", j + 1, i + 1);
				for (int i = 0; i < height; i++)
					free(arr[i]);
				free(arr);
				return 0;
			}

		}
	}
	for (int i = 0; i < height; i++)
		free(arr[i]);
	free(arr);
	return 0;
}