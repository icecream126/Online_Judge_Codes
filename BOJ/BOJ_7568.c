#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int person_num;
	scanf("%d", &person_num);
	int* height = malloc(sizeof(int) * person_num);
	int* weight = malloc(sizeof(int) * person_num);
	int* score = malloc(sizeof(int) * person_num);
	for (int i = 0; i < person_num; i++)
		score[i] = 1;
	for (int i = 0; i < person_num; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		weight[i] = a;
		height[i] = b;
	}
	for (int i = 0; i < person_num; i++) {
		for (int j = 0; j < person_num; j++) {
			if ((height[i] > height[j]) && (weight[i] > weight[j])) {
				score[j]++;
			}
		}
	}
	for (int i = 0; i < person_num; i++)
		printf("%d ", score[i]);
}