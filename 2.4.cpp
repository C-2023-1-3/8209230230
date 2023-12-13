#include<iostream>
using namespace std;
int main()
{
	int x, y;
	char i;
	cout << "请输入第一个数：" << endl;
	cin >> x;
	cout << "请输入运算符：" << endl;
	cin >> i;
	cout << "请输入第二个数：" << endl;
	cin >> y;
	switch (i) {
		case'+': {
			cout << x + y << endl;
			break;
		}
		case'-': {
			cout << x - y << endl;
			break;
		}
		case'*': {
			cout << x * y << endl;
			break;
		}
		case'/': {
			if (y == 0) {
				cout << "除数不可以为0！" << endl;
				break;
			}
			else {
				cout << x / y << endl;
				break;
			}
		}
		case'%': {
			cout << x % y << endl;
			break;
		default:cout << "请输入正确的运算符！" << endl;
		}
		return 0;

	}
		
}