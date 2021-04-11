#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int size, cnt_z=0, cnt_o=0;
	scanf("%d", &size);
	int* array = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
		if (array[i] == 0)
			cnt_z++;
		else
			cnt_o++;
	}
	printf("%d %d\n", cnt_z, cnt_o);
	if (cnt_z < cnt_o)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	return 0;	
}//¿Ö Æ²¸²?
//#include <iostream>
//using namespace std;
//int main() {
//	bool x;
//	int N;
//	cin >> N;
//	int cnt = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> x;
//		if (x)    cnt++;
//		else    cnt--;
//	}
//	if (cnt > 0)    cout << "Junhee is cute!";
//	else    cout << "Junhee is not cute!";
//}