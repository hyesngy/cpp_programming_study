#ifndef SCHEDULESMDF_H
#define SCHEDULESMDF_H
#include "Schedule.h"

// ScheduleSMDF 클래스는 Schedule 클래스를 상속받음
class ScheduleSMDF : public Schedule {
public:
	// 생성자: 이름, 요청된 층 배열, 현재 위치를 초기화
	ScheduleSMDF(string name, int floor[], int current = 0);
	
	virtual void run();
};

#endif
