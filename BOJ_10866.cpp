#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	string function;
	//char function[20];
	int loop, data;
	deque <int> d;

	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		cin >> function;
		if (function == "push_back") {
			scanf("%d", &data);
			d.push_back(data);
		}
		else if (function == "push_front") {
			scanf("%d", &data);
			d.push_front(data);
		}
		else if (function == "front") {
			if (!d.empty())
				printf("%d\n", d.front());
			else
				printf("-1\n");
		}
		else if (function == "back") {
			if (!d.empty())
				printf("%d\n", d.back());
			else
				printf("-1\n");
		}
		else if (function == "size") {
			printf("%d\n", d.size());
		}
		else if (function == "empty") {
			printf("%d\n", d.empty());
		}
		else if (function == "pop_front") {
			if (d.empty())
				printf("-1\n");
			else {
				printf("%d\n", d.front());
				d.pop_front();
			}
		}
		else if (function == "pop_back") {
			if (d.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", d.back());
				d.pop_back();
			}
		}
	}
}