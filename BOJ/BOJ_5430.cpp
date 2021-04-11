#include <iostream>
#include <deque>

using namespace std;

int main() {
	string function, array;
	int loop, size;
	bool flag = false, die = false;
	deque <char> d;

	cin >> loop;
	for (int i = 0; i < loop; i++) {
		
		cin >> function;
		cin >> size;
		cin >> array;

		array = array.substr(1, array.length() - 2);
		//array string 값을 deque에 넣어주는 과정
		for (int j = 0; j < array.length(); j++) {
			//string 중에 번호를 찾으면 deque에 넣어주기
			if (array.at(j) >= 48 && array.at(j) <= 57) {
				d.push_back(array.at(j));
			}
		}

		//function들을 확인하면서 R값이 나올 때 마다 flag를 바꿔주며
		//flag들을 확인하면서 D가 나온 경우 pop_back할지 push_back 할지
		flag = false;
		for (int j = 0; j < function.length(); j++) {
			//function이 R인 경우
			if (function.at(j) == 'R') {
				flag = !flag;
			}
			//function이 D인 경우(pop 할 때 비었으면 die하기)
			else {
				//reverse 된 경우
				if (!d.size()) {
					die = true;
					break;
				}
				if (flag == true) {
					d.pop_back();
				}
				else {
					d.pop_front();
				}
			}
		}

		//최종 출력할 때도 reverse 된 상태인지 아닌지를 확인해서 출력 순서를 결정
		//만약 reverse 된 상태라면

		int dSize = d.size();
		if (die) {
			cout << "error\n";
		}
		else if (flag == true&&!die) {
			for (int j = 0; j < dSize; j++) {
				cout << d.back()<<"\n";
				d.pop_back();
			}
		}

		//만약 reverse 된 상태가 아니라면
		else if(flag==false&&!die){
			for (int j = 0; j < dSize; j++) {
				cout << d.front()<<"\n";
				d.pop_front();
			}
		}
	}
}