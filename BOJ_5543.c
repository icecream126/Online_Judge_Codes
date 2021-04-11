#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int bMin=9999, wMin=9999;
	int tmp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &tmp);
		if (tmp < bMin)
			bMin = tmp;
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &tmp);
		if (tmp < wMin)
			wMin = tmp;
	}
	printf("%d\n", bMin + wMin - 50);
	return 0;
}