#include<iostream>
using namespace std;
int main() {
	int each = 2;
	int sum = 2;
	int i = 1;
	for (;sum<=100;) {
		each *= 2;
		sum = sum + each;
		i++;
	}
	float perday;
	perday = 0.8 *(sum-each) /(--i);
	cout << "每天平均花的钱为" << perday << endl;
}