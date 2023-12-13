#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "请输入x的值：" << endl;
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
		cout << "y的值是：" << y << endl;
	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
		cout << "y的值是：" << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "y的值是：" << y << endl;
	}
	else
		cout << "错误！请输入正确范围内的x的值！" << endl;
}