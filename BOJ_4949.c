#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int loop, small, big, i, j, flag = 0, index=0;
	char input[101], stack[101];
	
	while(1) {
		memset(input, 0, sizeof(input));
		small = 0;
		big = 0;
		scanf("%[^\n]s", input);
		getchar();

		if (strcmp(input, ".") == 0)
			return 0;
		for (j = 0; j < strlen(input); j++) {
			flag = 0;
			if (input[j] == '(') {
				stack[index] = '(';
				index++;
				small++;
			}
			else if (input[j] == ')') {
				small--;
				if (small<0||stack[index-1]!='(') {
					printf("NO\n");
					flag = 1;
					break;
				}
			}
			else if (input[j] == '[') {
				stack[index] = '[';
				index++;
				big++;
			}
			else if (input[j] == ']') {
				big--;
				if (big < 0||stack[index-1]!='[') {
					printf("NO\n");
					flag = 1;
					break;
				}
			}
		}
		if (small == 0 && big==0 && flag == 0)//소괄호, 대괄호 둘 다 개수가 맞는 경우
			printf("YES\n");
		else if ((small > 0 || big>0) && flag == 0)//소괄호, 대괄호 둘 중 하나라도 개수가 안 맞는 경우
			printf("NO\n");
	}
	return 0;
}