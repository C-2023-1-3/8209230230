#include<iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double side1, side2, side3;
	cout << "请输入三角形三边长：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1) {
		cout << "三角形的面积为：" << area(side1, side2, side3) << endl;
	}
	else
		cout << "三角形不存在！" << endl;
}