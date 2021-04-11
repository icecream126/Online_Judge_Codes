#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int j = 1; j <= a; j++) {
		for (int i = 1; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}

	for (int j = a-1; j >= 1; j--) {
		for (int i = 0; i < j; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}