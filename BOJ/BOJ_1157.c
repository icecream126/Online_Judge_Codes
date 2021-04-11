//시간초과 뜸

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char alpha_num(char a){
	int answer;
	if (a >= 'a' && a <= 'z') {
		answer = a - 'a';
	}
	else
		answer = a - 'A';
	return answer;
}
int main() {
	char string[1000001];
	int weight[26] = { 0, }, num, max=-1, index;
	scanf("%s", string);
	for (int i = 0; i < strlen(string); i++) {
		num = alpha_num(string[i]);
		weight[num]++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < weight[i]) {
			max = weight[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if ((weight[i] == max) && (i != index)) {
			printf("?");
			return 0;
		}
	}
	printf("%c", index + 'A');
	return 0;
}