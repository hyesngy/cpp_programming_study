#include <iostream>
using namespace std;
#include "ScheduleSMDF.h"

// ������: �θ� Ŭ���� Schedule�� �����ڸ� ȣ���Ͽ� �ʱ�ȭ
ScheduleSMDF::ScheduleSMDF(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// ���� ��ġ���� ���� ����� ������ �̵�

void ScheduleSMDF::run() {
	showMessage();
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�. 
	showFloor(); // ���� ��û�� ������ ����Ѵ�.

	for (int j = 0; j < 5; j++) {	// 5���� ��û�� ���� ���ؼ� �ݺ��Ѵ�.

		int index = -1;	// ���� ����� ���� ����Ǿ��ִ� �迭 �ε���, -1�� �ʱ�ȭ
		int minDistance = 30;	// �ּ� �Ÿ��� �����ϴ� ����, 30���� �ʱ�ȭ

		for (int i = 0; i < 5; i++) {	// 5���� ������ ���� ����� ���� ã�´�.
			if (floor[i] != 0 && minDistance > abs(floor[i] - current)) {	// ���� 0�� �ƴϰ�(���� �湮���� �ʾҰ�), ���� ������ �Ÿ��� �ּҰŸ����� �۴ٸ�
				index = i;	// �� ����� ���� �ε����� �����Ѵ�.
				minDistance = abs(floor[i] - current);	//�ּ� �Ÿ� ����
			}
		}
		if (index != -1) {	// ����� ���� ã������
			int moveFloor = floor[index];	//�̵��� ���� �����Ѵ�.
			cout << moveFloor << "������ ���ϴ�." << ' ';
			movingDistance += minDistance;	//�̵� �Ÿ� ����
			current = moveFloor;	// ���� ��ġ ����
			cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl;	// ���� �̵��Ÿ� ���
			floor[index] = 0; // �迭���� �湮�� ���� 0���� ����
		}
	}
	showCurrent();	// ���� ���������� ��ġ�� ���
	cout << "�� �̵� �Ÿ��� " << getMovingDistance() << endl; // �� �̵� �Ÿ� ���
}