#include<iostream>
using namespace std;
class Student {
public:
	Student(int n, float s) {
		num = n;
		score = s;
	}
	int num;
	float score;
};
int main() {
	Student student[5] = { Student(100001,99.0),Student(100002,73.5),
	Student(100003,84.0),Student(100004,100.0),Student(100005,69.5) };
	void max(Student*);
	Student* S = &student[0];
	max(S);
	return 0;
}
void max(Student* a) {
	float max_score = a[0].score;
	int i = 0;
	for(int k=0;k<5;k++)
		if (a[k].score > max_score) {
			max_score = a[k].score;
			i = k;
		}cout << a[i].num << " " << max_score << endl;
}