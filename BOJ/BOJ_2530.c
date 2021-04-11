#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hour, min, sec, time;
	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &time);
	sec += time;
	if (sec >= 60) {
		while (sec >= 60) {
			min++;
			sec -= 60;
			if (min > 59) {
				min = 0;
				hour++;
				if (hour > 23)
					hour = 0;
			}
		}
	}
	printf("%d %d %d", hour, min, sec);
}