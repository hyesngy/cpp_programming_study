#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student {
	string name;	//�̸�
	string dept;	//�а�
	int score;		//����
public:
	Student();
	void set(string name, string dept, int score);
	//void changeDept(string dept);
	string getName();
	char getGrade(); // ������ ���� ����Ͽ� ����
	void show(); // �� �л��� �̸�, �а�, ���� ���
};
#endif