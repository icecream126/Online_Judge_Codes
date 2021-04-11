#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int car[5];
	int day, cnt=0;
	scanf("%d", &day);
	scanf("%d %d %d %d %d", &car[0], &car[1], &car[2], &car[3], &car[4]);
	for (int i = 0; i < 5; i++) {
		if (car[i] == day)
			cnt++;
	}
	printf("%d", cnt);
}