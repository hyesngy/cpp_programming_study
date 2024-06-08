#include "Student.h"
#include <iostream>
using namespace std;

//생성자 값 초기화
Student::Student() {
	this->name = "";
	this->dept = "";
	this->score = 0;
}

// 이름 학과 점수 입력
void Student::set(string name, string dept, int score) {
	this->name = name;
	this->dept = dept;
	this->score = score;
}

//void Student::changeDept(string dept) {
//}

// 이름 리턴
string Student::getName() {
	return name;
}

// 점수로 학점 계산하여 리턴
char Student::getGrade() {
	if (score > 90) 
		return 'A';
	else if (score > 80) 
		return 'B';
	else if (score > 70) 
		return 'C';
	else if (score > 60) 
		return 'D';
	else 
		return 'F';
}

// 이 학생의 이름, 학과, 학점 출력
void Student::show() {
	cout << name << ", " << dept << ", " << getGrade() << endl;
}