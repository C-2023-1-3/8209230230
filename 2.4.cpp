#include<iostream>
using namespace std;
int main()
{
	int x, y;
	char i;
	cout << "�������һ������" << endl;
	cin >> x;
	cout << "�������������" << endl;
	cin >> i;
	cout << "������ڶ�������" << endl;
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
				cout << "����������Ϊ0��" << endl;
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
		default:cout << "��������ȷ���������" << endl;
		}
		return 0;

	}
		
}