#include <iostream>
using namespace std;
#include "ScheduleSMDF.h"

// 생성자: 부모 클래스 Schedule의 생성자를 호출하여 초기화
ScheduleSMDF::ScheduleSMDF(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// 현재 위치에서 가장 가까운 층으로 이동

void ScheduleSMDF::run() {
	showMessage();
	showCurrent(); // 현재 엘리베이터 위치를 출력한다. 
	showFloor(); // 현재 요청된 층들을 출력한다.

	for (int j = 0; j < 5; j++) {	// 5개의 요청된 층에 대해서 반복한다.

		int index = -1;	// 가장 가까운 층이 저장되어있는 배열 인덱스, -1로 초기화
		int minDistance = 30;	// 최소 거리를 저장하는 변수, 30으로 초기화

		for (int i = 0; i < 5; i++) {	// 5개의 층에서 가장 가까운 층을 찾는다.
			if (floor[i] != 0 && minDistance > abs(floor[i] - current)) {	// 값이 0이 아니고(아직 방문되지 않았고), 현재 층과의 거리가 최소거리보다 작다면
				index = i;	// 더 가까운 층의 인덱스를 저장한다.
				minDistance = abs(floor[i] - current);	//최소 거리 갱신
			}
		}
		if (index != -1) {	// 가까운 층을 찾았으면
			int moveFloor = floor[index];	//이동할 층을 저장한다.
			cout << moveFloor << "층으로 갑니다." << ' ';
			movingDistance += minDistance;	//이동 거리 누적
			current = moveFloor;	// 현재 위치 갱신
			cout << "누적 이동 거리는 " << getMovingDistance() << endl;	// 누적 이동거리 출력
			floor[index] = 0; // 배열에서 방문한 층을 0으로 설정
		}
	}
	showCurrent();	// 현재 엘리베이터 위치를 출력
	cout << "총 이동 거리는 " << getMovingDistance() << endl; // 총 이동 거리 출력
}