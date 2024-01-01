#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	void setPoint(int i, int j);
	void display();
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};
int main() {
	Point cpoint(60, 80);
	int i, j;
	cout << "Enter dx:" << endl;
	cin >> i;
	cout << "Enter dy:" << endl;
	cin >> j;

	cpoint.setPoint(i, j);
	cpoint.display();
}


void Point::setPoint(int i, int j){
	this->x = x + i;
	this->y = y + j;
}
void Point::display() {
	cout << "(" << x << "," << y << ")" << endl;
}