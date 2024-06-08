#include <iostream>
using namespace std;
#include "ScheduleSCAN.h"

// ������: �θ� Ŭ���� Schedule�� �����ڸ� ȣ���Ͽ� �ʱ�ȭ
ScheduleSCAN::ScheduleSCAN(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// �̵� ���⿡�� ���� ����� ������ �̵�. ������ ���� ���� ��ȯ
// ������ ���� ���������Ͱ� �ִ� ��ġ���� ���� ����

void ScheduleSCAN::run() {
	showMessage();
	showCurrent(); // ���� ���������� ��ġ�� ����Ѵ�. 
	showFloor(); // ���� ��û�� ������ ����Ѵ�.

	// ���� ������ 30������ �ö󰡸鼭
	for (int i = current; i <= MAX_FLOOR; i++) {
		for (int j = 0; j < 5; j++) {		// ��û�� 5�� ���� Ȯ���Ѵ�.
			if (floor[j] == i) {			// ��û�� ���� ��ġ�ϸ�
				cout << i << "������ ���ϴ�." << ' ';		// �ش� ������ �̵��Ѵ�.
				movingDistance += i - current;	// �ö�� ������ ���� ���� ���� �̵��Ÿ��� ���Ѵ�.
				current = i;					// ���� ��ġ ����
				cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl; // ���� �̵� �Ÿ� ���
				floor[j] = 0;	// �迭���� �湮�� ���� 0���� ����
			}
		}
	}

	// ���� ������ 1������ �������鼭
	for (int i = current; i >= 1; i--) {	
		for (int j = 0; j < 5; j++) {		// �䫊�� 5�� ���� Ȯ���Ѵ�.
			if (floor[j] == i) {			// �迭�� ����� ���� ������
				cout << i << "������ ���ϴ�." << ' ';		// �ش� ������ �̵��Ѵ�.
				movingDistance += current - i;	// ���� ������ ������ ���� ���� �̵��Ÿ��� ���Ѵ�.
				current = i;					// ���� ��ġ ����	
				cout << "���� �̵� �Ÿ��� " << getMovingDistance() << endl;	// ���� �̵��Ÿ� ���
				floor[j] = 0;	// �迭���� �湮�� ���� 0���� ����
			}
		}
	}
	showCurrent();	// ���� ���������� ��ġ�� ���
	cout << "�� �̵� �Ÿ��� " << getMovingDistance() << endl;	 // �� �̵� �Ÿ� ���
}