#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈë×Ö·û£º" << endl;
	char i;
	cin >> i;
	if (i >= 65 && i <= 90) {
		i = i + 32;
		cout << i << endl;
	}
	else if (i >= 97 && i <= 122) {
		i = i - 32;
		cout << i << endl;
	}
	else {
		cout << (int)i << endl;
	}
}

	
