#include <iostream>
using namespace std;

#include "ScheduleFCFS.h"
#include "ScheduleSMDF.h"
#include "ScheduleSCAN.h"

int main() {
	int current = 10;
	int floor[5] = { 0 };
	cout << "���������ʹ� " << Schedule::MAX_FLOOR << "�������� ���ϴ�." << endl;
	cout << "���� ���� " << current << "���Դϴ�." << endl;
	cout << "�������ϴ� ������� 5�� ���� �Է��ϼ���(";
	cout << "0����, 31�̻�, ���� ��, ������ ������ �� �Է� ����)>>";
	for (int i = 0; i < 5; i++) { // 5�� ���� �Է�
		cin >> floor[i];
	}

	// FCFS(First Come First Served). �Է��� ������� ���������� �̵�
	ScheduleFCFS fcfs("FCFS", floor, current);
	fcfs.run();

	// SMDF(Shortest Moving Distance First). ���� ��ġ���� ���� ����� ������ �̵�
	ScheduleSMDF smdf("SMDF", floor, current);
	smdf.run();

	// SCAN. �̵� ���⿡�� ���� ����� ������ �̵�. ������ ���� ���� ��ȯ
	// ������ ���� ���������Ͱ� �ִ� ��ġ���� ���� ����
	ScheduleSCAN scan("SCAN", floor, current);
	scan.run();
}