#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

typedef struct answer {
	char yoil[4];
}answer;
int main() {
	int first_day = 1, mon, day, namuji;
	answer ans[7];
	vector <int> month = {31,28,31,30,31,30,31,31,30,31,30,31};
	strcpy(ans[0].yoil, "MON");
	strcpy(ans[1].yoil, "TUE");
	strcpy(ans[2].yoil, "WED");
	strcpy(ans[3].yoil, "THU");
	strcpy(ans[4].yoil, "FRI");
	strcpy(ans[5].yoil, "SAT");
	strcpy(ans[6].yoil, "SUN");

	cin >> mon >> day;

	if (mon != 1) {
		for (int i = 1; i < mon; i++) {
			if (month[i - 1] == 31) {
				day += 3;
			}
			else if (month[i - 1] == 30) {
				day += 2;
			}
		}
	}
	namuji = (day % 7);
	if (namuji != 0) {
		namuji -= 1;
		printf("%s", ans[namuji].yoil);
	}
	else {
		printf("SUN");
	}
}