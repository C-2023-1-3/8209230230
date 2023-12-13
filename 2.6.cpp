#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "请输入两个正整数：" << endl;
	cin >> x >> y;
	for (int i = (x < y ? x : y);;i--) {
		if (x % i == 0 && y % i == 0) {
			cout << "最大公约数是：" << i << endl;
			break;
		}
	}
	for (int j = (x < y ? y : x);;j++) {
		if (j % x == 0 && j % y == 0) {
			cout << "最小公倍数是：" << j << endl;
			break;
		}
	}
}