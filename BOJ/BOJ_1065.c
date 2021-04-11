#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, one, two, three, cnt=0;
	scanf("%d", &num);
	if (num > 0 && num < 10) {//1ÀÚ¸®¼ö
		printf("%d", num);
	}
	else if (num > 9 && num < 100) {
		printf("%d", num);
	}
	else if (num > 99 && num <= 1000) {
		for (int i = num; i >= 100; i--) {
			three = i / 100;
			two = (i - (three * 100)) / 10;
			one = i % 10;
			if ((three - two) == (two - one))
				cnt++;
		}
		printf("%d", cnt + 99);
	}
}