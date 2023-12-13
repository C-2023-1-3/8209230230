#include<iostream>
using namespace std;
int main()
{
	float a, b, c, gir;
	cout << "请输入三角形三边的长：" << endl;
	cin >> a>> b>> c;
	float t;
	t = (a > b ? (a > c ? a : c) : (b > c ? b : c));
	gir = a + b + c;
	if (gir - t <= t) {
		cout << "这三边不能构成三角形！" << endl;
	}
	else {
		cout << "这个三角形的周长是：" << gir << endl;
		if (a == b || b == c || a == c) {
			cout << "这个三角形是等腰三角形！" << endl;
		}
		else {
			cout << "这个三角形不是等腰三角形！" << endl;
		}
	}
}