#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
	char s1[9];
	int time[3], time2[3];
	scanf("%s", &s1);
	char* ptr1 = strtok(s1, ":");
	int cnt = 0;
	while (ptr1 != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		time[cnt] = atoi(ptr1);
		cnt++;// �ڸ� ���ڿ� ���
		ptr1 = strtok(NULL, ":");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}
	scanf("%s", &s1);
	ptr1 = strtok(s1, ":");
	cnt = 0;
	while (ptr1 != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		time2[cnt] = atoi(ptr1);
		cnt++;// �ڸ� ���ڿ� ���
		ptr1 = strtok(NULL, ":");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}
	int total1, total2;
	total1 = time[0] * 3600 + time[1] * 60 + time[2];
	total2 = time2[0] * 3600 + time2[1] * 60 + time2[2];
	if (total2 > total1)
		total2 = total2 - total1;
	else//( total2 <= total1 )
		total2 = total2 - total1 + 24*3600;
		int hour, min, sec;
		hour = total2 / 3600;
		min = (total2 - hour * 3600) / 60;
		sec = (total2 - hour * 3600) % 60;
		printf("%02d:%02d:%02d", hour, min, sec);
	
	
}