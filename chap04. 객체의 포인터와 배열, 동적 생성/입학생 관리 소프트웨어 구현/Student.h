#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student {
	string name;	//이름
	string dept;	//학과
	int score;		//점수
public:
	Student();
	void set(string name, string dept, int score);
	//void changeDept(string dept);
	string getName();
	char getGrade(); // 점수로 학점 계산하여 리턴
	void show(); // 이 학생의 이름, 학과, 학점 출력
};
#endif