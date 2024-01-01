class Student {
public:
	void display();
	Student() {
		set_value();
	}
	Student(int _num, const char _name[20], char _sex);
	void set_value();
private:
	int num;
	char name[20];
	char sex;
};