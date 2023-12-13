#include<iostream>
#define N 10
using namespace std; 
void BubbleSort(double s[N]) {
	double t;
	bool changed = true;
	do {
		changed = false;
		for (int j = 0;j < N - 1;j++) {
			if (s[j] > s[j + 1]) {
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
				changed = true;
			}
		}
	} while (changed == true);
}
int main() {
	double a[N];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0;i < N;i++)
		cin >> a[i];
	cout << "Bubblesorted ten numbers are:" << endl;
	BubbleSort(a);
	for (int i = 0;i < N;i++)
		cout << a[i] << " ";
	return 0;
}