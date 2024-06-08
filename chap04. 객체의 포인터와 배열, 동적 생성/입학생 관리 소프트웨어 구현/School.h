#ifndef SCHOOL_H
#define SCHOOL_H
#include "Student.h"

class School {
	string name; // �а� �̸�
	Student* p; // �迭 ������
	int size; // ���л� ��
	void searchByName();
	void showAll(); // ��� �л��� ���
	void read(); // ��� �л��� �̸��� �а�, ���� �Է�
public:
	School(string name);
	~School();
	void run();
};

#endif