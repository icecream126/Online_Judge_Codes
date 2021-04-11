#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int r1, r2, s;
	scanf("%d %d", &r1, &s);
	r2 = 2*s - r1;
	printf("%d", r2);
}