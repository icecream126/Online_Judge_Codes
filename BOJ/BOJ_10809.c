#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char word[101] = { 0, };
	int alpha[27];
	memset(alpha, -1, sizeof(alpha));
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++) {
		if (alpha[word[i]-97] == -1)
			alpha[word[i]-97] == i;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", alpha[i]);
}