#include<iostream>
using namespace std;
int main()
{
	double a;
	cout << "������a��" << endl;
	cin >> a;
	if (a < 0) {
		cout << "������һ���Ǹ�ʵ����" << endl;
	}
	else {
		double x = a;
		double old = a + 1;
		while (fabs(x - old) > 10e-5) {
			old = x;
			x = (old + a / old) / 2;
		}
		cout << "������ƽ�����ǣ�" << x << endl;
		
		
	}
		
	
}