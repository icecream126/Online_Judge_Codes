#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int loop, left, i, j, flag=0;
	char input[51];
	scanf("%d", &loop);
	for (i = 0; i < loop; i++) {
		memset(input, 0, sizeof(input));
		left = 0;
		scanf("%s", input);
		for (j = 0; j < strlen(input); j++) {
			flag = 0;
			if (input[j] == '(')
				left++;
			else if (input[j] == ')') {
				left--;
				if (left < 0) {
					printf("NO\n");
					flag = 1;//중복 출력 방지용 플래그
					break;
				}
			}
		}
		if (left == 0&&flag==0)
			printf("YES\n");
		else if(left>0&&flag==0)
			printf("NO\n");
	}
	return 0;
}