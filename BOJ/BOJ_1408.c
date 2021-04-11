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
	while (ptr1 != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
	{
		time[cnt] = atoi(ptr1);
		cnt++;// 자른 문자열 출력
		ptr1 = strtok(NULL, ":");      // 다음 문자열을 잘라서 포인터를 반환
	}
	scanf("%s", &s1);
	ptr1 = strtok(s1, ":");
	cnt = 0;
	while (ptr1 != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
	{
		time2[cnt] = atoi(ptr1);
		cnt++;// 자른 문자열 출력
		ptr1 = strtok(NULL, ":");      // 다음 문자열을 잘라서 포인터를 반환
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