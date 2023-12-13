#include<iostream>
using namespace std;
int main()
{
	double a;
	cout << "请输入a：" << endl;
	cin >> a;
	if (a < 0) {
		cout << "请输入一个非负实数！" << endl;
	}
	else {
		double x = a;
		double old = a + 1;
		while (fabs(x - old) > 10e-5) {
			old = x;
			x = (old + a / old) / 2;
		}
		cout << "该数的平方根是：" << x << endl;
		
		
	}
		
	
}