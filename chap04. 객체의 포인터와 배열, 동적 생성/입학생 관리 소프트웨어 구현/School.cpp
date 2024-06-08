#include "School.h"
#include <iostream>
using namespace std;

//������
School::School(string name) {
	this->name = name;
}

//�Ҹ���
School::~School() {
	delete[] p;	
}

//�̸� �˻��ϸ� ���� ���
void School::searchByName() {
	cout << "***** �̸����� �˻��ϸ� ������ ����մϴ�. *****" << endl;

	while (true) {
		cout << "�̸�>>";
		string name;
		cin >> name;	// �̸� �Է�

		if (name == "�׸�") {	// �׸� �Է� �� ����
			cout << "�˻��� �����մϴ�." << endl;
			return;
		}

		bool found = false;	//�л� ã���� true, ��ã���� false üũ

		for (int i = 0; i < size; i++) {
			if (p[i].getName() == name) {	//�л� ã�� ���
				cout << name << "�� " << p[i].getGrade() << "�Դϴ�." << endl;
				found = true;
				break;	//ã���� ����
			}
		}
		if(!found)	//�л� ��ã�� ���
			cout << name << " �л��� �������� �ʽ��ϴ�" << endl;
	}
}

// ��� �л��� ���
void School::showAll(){
	cout << "***** ��ü �л��� ����մϴ�.*****" << endl;
	for (int i = 0; i < size; i++) {	//���л� ����ŭ �ݺ��ؼ� ���
		p[i].show();
	}
}

// ��� �л��� �̸��� �а�, ���� �Է�
void School::read() {
	cout << "���л���>>";
	cin >> size;	//���л� �� �Է�

	p = new Student[size];	//size��ŭ student��ü�� �迭 ����
	cout << "***** ���л��� �̸��� �а�, ������ �Է��մϴ�.*****" << endl;

	for (int i = 0; i < size; i++) {	//size��ŭ
		string name, dept;
		int score;
		cout << i+1 << " : �̸�, �а�, ����>>";
		cin >> name >> dept >> score;	//���������� ����ް�
		p[i].set(name, dept, score);	//set()�̿��ؼ� �迭�� ����
	}
}

void School::run() {
	cout << "*****��ǻ�Ͱ��к��� ���� ���� ���α׷��Դϴ�.*****" << endl;
	read();	//��ü�Է�
	searchByName();	//�̸��˻�->�������
	showAll(); //��ü���
	cout << "*****��ǻ�Ͱ��к��� ���� ���� ���α׷��� �����մϴ�.*****" << endl;
}