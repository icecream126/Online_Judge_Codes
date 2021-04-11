#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char string[21];
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int loop;
		scanf("%d %s", &loop,string);
		for (int j = 0; j < strlen(string); j++) {
			for (int k = 0; k < loop; k++)
				printf("%c", string[j]);
		}
		printf("\n");
	}
}