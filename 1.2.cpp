#include<iostream>
using namespace std;
int main()
{
	const float pi = 3.14;
	float r, h;
	cout << "ÇëÊäÈëÔ²×¶µ×°ë¾¶£º" << endl;
	cin >> r;
	cout << "ÇëÊäÈë×¶¸ß£º" << endl;
	cin >> h;
	cout << "Ô²×¶µÄÌå»ýÊÇ£º" << pi * h * r * r / 3 << endl;
	return 0;

}
