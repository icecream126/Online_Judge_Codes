#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int k = 2 * (num - i - 1); k >= 0; k--)
			printf("*");
		printf("\n");
	}
	for (int i = 2; i <= num; i++) {
		for (int j = 1; j <= num-i; j++)
			printf(" ");
		for (int k = 0; k <= 2 * (i - 1); k++)
			printf("*");
		printf("\n");
	}
}