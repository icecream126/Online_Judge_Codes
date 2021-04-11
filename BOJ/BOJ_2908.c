#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
	char a[4];
	char b[4];
	char tmp[4];
	bool flag = 0;
	scanf("%s %s", a, b);
	for (int i = 2; i >= 0; i--) {
		tmp[2 - i] = a[i];
	}
	for (int i = 2; i >= 0; i--) {
		a[2 - i] = b[i];
	}
	for (int i = 0; i <= 2; i++) {
		b[i] = tmp[i];
	}
	if (strcmp(a, b) > 0)
		flag = 1;
	if (flag == 1)
		printf("%s", a);
	else
		printf("%s", b);
}