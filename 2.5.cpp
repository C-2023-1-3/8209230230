#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÇëÊäÈëÒ»ÐÐ×Ö·û£º" << endl;
	int letter=0, space=0, digit=0, others=0;
	while ((ch=getchar())!= '\n')
	 {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			letter++;
		else if (ch >='0' && ch <= '9')
			digit++;
		else if (ch == ' ')
			space++;
		else
			others++;
	}
	cout << "letternum is " << letter << endl;
	cout << "spacenum is " << space << endl;
	cout << "digitnum is " << digit << endl;
	cout << "othersnum is " << others << endl;
	
	

}