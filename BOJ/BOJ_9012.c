#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int loop, left, right;
	char input[51];
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		memset(input, '/0', strlen(input));
		left = 0;
		right = 0;
		scanf("%s", &input);
		for (int i = 0; i < strlen(input); i++) {
			if (input[i] == '(')
				left++;
			else
				right++;
		}
		if (left == right)
			printf("YES\n");
		else
			printf("NO\n");
	}
}