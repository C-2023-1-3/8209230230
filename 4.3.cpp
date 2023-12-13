#include<iostream>
using namespace std;
int main()
{
	const int num = 100;
	bool list[num];
	for (int i = 0;i < num;i++) {
		list[num] = false;
	}
	for (int j = 0;j < num;j++) {
		for (int k = j;k < num;k += j + 1) {
			if (list[k]) list[k] = false;
			else list[k] = true;
		}
	}
	for (int i = 0;i < num;i++) {
		if (list[i]) cout << i + 1 << '\t';
	}
	cout << endl;
	return 0;
}