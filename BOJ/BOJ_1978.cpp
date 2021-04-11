#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, cnt=0, loop, j=2;
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		scanf("%d", &num);
		cnt++;
		if (num == 1) {
			cnt--;
			continue;
		}
		for (j = 2; j < num; j++) {//num/2는 되지 않는다
			if (((num % j) == 0) || (num == 1)) {
				cnt--;
				break;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}