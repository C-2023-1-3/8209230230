#include<iostream>
#include"student.h"
using namespace std;
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value() {
	cout << "num:";
	cin >> num;
	cout << "name:";
	cin >> name;
	cout << "sex:";
	cin >> sex;
}
Student::Student(int _num, const char _name[20], char _sex) {
	num = _num;
	sex = _sex;
	for (int i = 0;i < 20;i++)
		name[i] = _name[i];
}
