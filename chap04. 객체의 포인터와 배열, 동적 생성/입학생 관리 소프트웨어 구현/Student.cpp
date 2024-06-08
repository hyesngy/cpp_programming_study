#include "Student.h"
#include <iostream>
using namespace std;

//������ �� �ʱ�ȭ
Student::Student() {
	this->name = "";
	this->dept = "";
	this->score = 0;
}

// �̸� �а� ���� �Է�
void Student::set(string name, string dept, int score) {
	this->name = name;
	this->dept = dept;
	this->score = score;
}

//void Student::changeDept(string dept) {
//}

// �̸� ����
string Student::getName() {
	return name;
}

// ������ ���� ����Ͽ� ����
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

// �� �л��� �̸�, �а�, ���� ���
void Student::show() {
	cout << name << ", " << dept << ", " << getGrade() << endl;
}