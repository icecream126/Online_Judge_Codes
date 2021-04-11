#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main() {
	int loop, num, sum, cnt=0,a;
	double average, ans;
	vector<int>score;
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		cnt = 0;
		score.clear();
		sum = 0;
		scanf("%d", &num);
		score.resize(num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &a);
			score[j]=a;
			sum += a;
		}
		average = (double)sum / double(num);
		for (int k = 0; k < num; k++) {
			if (score[k] > average)
				cnt++;
		}
		ans = ((double)cnt / (double)num)*100;
		printf("%.3f%%\n", ans);
	}
}