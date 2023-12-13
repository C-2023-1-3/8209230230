#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Fah, Cel;
	cout << "请输入华氏温度：" << endl;
	cin >> Fah;
	Cel = (Fah - 32) / 1.8;
	cout << "对应的摄氏温度是：" << setprecision(2) << Cel << endl;
	return 0;
}