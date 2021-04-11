#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main() {
	int array[1000], num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &array[i]);
	}
	qsort(array, num, sizeof(int), cmp);
	for (int i = 0; i < num; i++)
		printf("%d\n", array[i]);
}