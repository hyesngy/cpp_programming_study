#include <iostream>
using namespace std;
#include "ScheduleFCFS.h"

ScheduleFCFS::ScheduleFCFS(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// ������ ������� ��������Ʈ�� �̵���Ų��. 

void ScheduleFCFS::run() {
	showMessage();
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�. 
	showFloor(); // ���� ��û�� ������ ����Ѵ�.

	for (int i = 0; i < 5; i++) {
		int distance = abs(floor[i] - current); // abs()�� ���밪�� ����
		cout << floor[i] << "������ ���ϴ�." << ' '; // �̵��ϴ� ���� ����Ѵ�. 
		movingDistance += distance; // �̵� �Ÿ��� �����Ѵ�. 
		current = floor[i]; // ���� ���� ��ġ�� �����Ѵ�. 
		cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl;
	}
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�. 
	cout << "�� �̵� �Ÿ��� " << getMovingDistance() << endl;
}