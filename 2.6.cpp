#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "������������������" << endl;
	cin >> x >> y;
	for (int i = (x < y ? x : y);;i--) {
		if (x % i == 0 && y % i == 0) {
			cout << "���Լ���ǣ�" << i << endl;
			break;
		}
	}
	for (int j = (x < y ? y : x);;j++) {
		if (j % x == 0 && j % y == 0) {
			cout << "��С�������ǣ�" << j << endl;
			break;
		}
	}
}