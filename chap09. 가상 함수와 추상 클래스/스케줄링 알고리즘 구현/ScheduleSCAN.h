#ifndef SCHEDULESCAN_H
#define SCHEDULESCAN_H
#include "Schedule.h"

// ScheduleSCAN Ŭ������ Schedule Ŭ������ ��ӹ���
class ScheduleSCAN : public Schedule {
public:
	// ������: �̸�, ��û�� �� �迭, ���� ��ġ�� �ʱ�ȭ
	ScheduleSCAN (string name, int floor[], int current = 0);
	
	virtual void run();
};

#endif
