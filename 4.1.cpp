#include<iostream>
using namespace std;
int main() {
	int a[10];
	cout << "Enter ten numbers£º" << endl;
	for (int i = 0;i < 10;i++)
		cin >> a[i];
	cout << "The distict numbers are:" << endl;
	cout << a[0]<<" ";
	int b[10], num = 0;
	for (int j = 1;j < 10;j++) {
		for (int k = 0;k < j;k++) {
			if (a[j] != a[k]) {
				if (k == j - 1) cout << a[j] << " ";
				else continue;
			}
			else break;
		}
	}
}