#ifndef SCHEDULEFCFS_H
#define SCHEDULEFCFS_H
#include "Schedule.h"

// ScheduleFCFS Ŭ������ Schedule Ŭ������ ��ӹ���
class ScheduleFCFS : public Schedule {
public:
	// ������: �̸�, ��û�� �� �迭, ���� ��ġ�� �ʱ�ȭ
	ScheduleFCFS(string name, int floor[], int current = 0);
	
	virtual void run();
};

#endif
