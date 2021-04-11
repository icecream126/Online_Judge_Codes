#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int** ptr2, size, **index,sum=0;
	scanf("%d", &size);
	ptr2 = (int**)malloc(sizeof(int*) * size);
	index = (int**)malloc(sizeof(int*) * size);
	for (int i = 0; i < size; i++) {
		ptr2[i] = malloc(sizeof(int) * 3);
		index[i] = calloc(3,sizeof(int));
		scanf("%d %d %d", &ptr2[i][0], &ptr2[i][1], & ptr2[i][2]);
	}
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < size; i++) {
			for (int j = i+1; j < size; j++) {
				if (ptr2[i][k] == ptr2[j][k]) {
					index[i][k] = -1;
					index[j][k] = -1;
				}

			}
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++) {
			if (index[i][j] != -1)
				sum += ptr2[i][j];
		}
		printf("%d\n", sum);
		sum = 0;
	}
}
