#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int total, tmp, sum = 0;
	scanf("%d", &total);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("%d", total - sum);
}