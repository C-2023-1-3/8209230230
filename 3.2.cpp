#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)
		return false;
	int i = 2;
	while (i * i <= num) {
		if (num% i == 0)
			return false;
		i++;
	}
	return true;
}
int main() {
	int count = 0, row = 0;
	for (int num = 0;;num++) {
		if (is_prime(num) == true) {
			cout << num << '\t';
			count++;
			if (count == 10) {
				cout << '\n';
				count = 0;
				row++;
			}
		}
		if (row == 20)break;
	}
}