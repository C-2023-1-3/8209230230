#include<iostream>
using namespace std;
class Box {
private:
	float length;
	float width;
	float height;
public:
	float volume() {
		return length * width * height;
	}
	void set_value() {
		cout << "Enter the length,width and height of the box:" << endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void display() {
		cout << volume() << endl;
	}
};
int main() {
	Box box1, box2, box3;
	box1.set_value();
	cout << "The volume of box1 is:";
	box1.display();

	box2.set_value();
	cout << "The volume of box2 is:";
	box2.display();

	box3.set_value();
	cout << "The volume of box3 is:";
	box3.display();
	return 0;
}
