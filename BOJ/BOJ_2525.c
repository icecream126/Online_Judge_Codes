#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hour, min, time;
	scanf("%d %d", &hour, &min);
	scanf("%d", &time);
	min += time;
	if (min >= 60) {
		while (min >= 60) {
			hour++;
			min -= 60;
			if (hour > 23)
				hour = 0;
		}
	}
	printf("%d %d", hour, min);
}