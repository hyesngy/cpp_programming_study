#ifndef SCHEDULESMDF_H
#define SCHEDULESMDF_H
#include "Schedule.h"

// ScheduleSMDF Ŭ������ Schedule Ŭ������ ��ӹ���
class ScheduleSMDF : public Schedule {
public:
	// ������: �̸�, ��û�� �� �迭, ���� ��ġ�� �ʱ�ȭ
	ScheduleSMDF(string name, int floor[], int current = 0);
	
	virtual void run();
};

#endif
