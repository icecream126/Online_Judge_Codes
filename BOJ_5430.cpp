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
		//array string ���� deque�� �־��ִ� ����
		for (int j = 0; j < array.length(); j++) {
			//string �߿� ��ȣ�� ã���� deque�� �־��ֱ�
			if (array.at(j) >= 48 && array.at(j) <= 57) {
				d.push_back(array.at(j));
			}
		}

		//function���� Ȯ���ϸ鼭 R���� ���� �� ���� flag�� �ٲ��ָ�
		//flag���� Ȯ���ϸ鼭 D�� ���� ��� pop_back���� push_back ����
		flag = false;
		for (int j = 0; j < function.length(); j++) {
			//function�� R�� ���
			if (function.at(j) == 'R') {
				flag = !flag;
			}
			//function�� D�� ���(pop �� �� ������� die�ϱ�)
			else {
				//reverse �� ���
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

		//���� ����� ���� reverse �� �������� �ƴ����� Ȯ���ؼ� ��� ������ ����
		//���� reverse �� ���¶��

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

		//���� reverse �� ���°� �ƴ϶��
		else if(flag==false&&!die){
			for (int j = 0; j < dSize; j++) {
				cout << d.front()<<"\n";
				d.pop_front();
			}
		}
	}
}