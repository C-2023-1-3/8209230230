#include<iostream>
using namespace std;
int main()
{
	float a, b, c, gir;
	cout << "���������������ߵĳ���" << endl;
	cin >> a>> b>> c;
	float t;
	t = (a > b ? (a > c ? a : c) : (b > c ? b : c));
	gir = a + b + c;
	if (gir - t <= t) {
		cout << "�����߲��ܹ��������Σ�" << endl;
	}
	else {
		cout << "��������ε��ܳ��ǣ�" << gir << endl;
		if (a == b || b == c || a == c) {
			cout << "����������ǵ��������Σ�" << endl;
		}
		else {
			cout << "��������β��ǵ��������Σ�" << endl;
		}
	}
}