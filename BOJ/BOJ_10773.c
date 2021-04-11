#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input[100000], loop, num, index=0;
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		scanf("%d", &num);
		if (num != 0) {
			input[index] = num;
			index++;
		}
		else {
			index--;
			input[index] = '/0';
		}
	}
	int sum = 0;
	for (int i = 0; i < index ; i++) {
		sum += input[i];
	}
	printf("%d", sum);
	return 0;
}