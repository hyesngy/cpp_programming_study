#include <iostream>
using namespace std;
#include "Schedule.h"

// ������: Ŭ������ �̸�, ��û�� �� �迭, ���� ���� �ʱ�ȭ
Schedule::Schedule(string name, int floor[], int current) {
	this->name = name;
	for (int i = 0; i < 5; i++) {
		this->floor[i] = floor[i];
	}
	this->current = current;
	movingDistance = 0;	// �ʱ� �̵� �Ÿ��� 0���� �����Ѵ�.
}
int Schedule::getMovingDistance() {
	return movingDistance;	//������������ ���� �̵� �Ÿ��� ��ȯ�Ѵ�.
}
void Schedule::showFloor() {
	cout << "���� ��ư�� ������ ������ ";
	for (int i = 0; i < 5; i++)
		cout << floor[i] << ' ';	// ���� ��û�� ������ ����Ѵ�.
	cout << endl;
}

// ���� ���������� ��ġ�� ���
void Schedule::showCurrent() {
	cout << "���� ������������ ��ġ�� " << current << endl;
}

// ������������ ��� �޽����� ���
void Schedule::showMessage() {
	cout << "\n*****���ݺ��� " << name << " ������� ���������Ͱ� ����˴ϴ� *****"
		<< endl;
}