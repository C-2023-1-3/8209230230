#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Fah, Cel;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> Fah;
	Cel = (Fah - 32) / 1.8;
	cout << "��Ӧ�������¶��ǣ�" << setprecision(2) << Cel << endl;
	return 0;
}