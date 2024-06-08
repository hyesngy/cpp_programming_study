#include <iostream>
using namespace std;
#include "Schedule.h"

// 생성자: 클래스의 이름, 요청된 층 배열, 현재 층을 초기화
Schedule::Schedule(string name, int floor[], int current) {
	this->name = name;
	for (int i = 0; i < 5; i++) {
		this->floor[i] = floor[i];
	}
	this->current = current;
	movingDistance = 0;	// 초기 이동 거리를 0으로 설정한다.
}
int Schedule::getMovingDistance() {
	return movingDistance;	//엘리베이터의 누적 이동 거리를 반환한다.
}
void Schedule::showFloor() {
	cout << "현재 버튼이 눌러진 층들은 ";
	for (int i = 0; i < 5; i++)
		cout << floor[i] << ' ';	// 현재 요청된 층들을 출력한다.
	cout << endl;
}

// 현재 엘리베이터 위치를 출력
void Schedule::showCurrent() {
	cout << "현재 엘리베이터의 위치는 " << current << endl;
}

// 엘리베이터의 방식 메시지를 출력
void Schedule::showMessage() {
	cout << "\n*****지금부터 " << name << " 방식으로 엘리베이터가 운행됩니다 *****"
		<< endl;
}