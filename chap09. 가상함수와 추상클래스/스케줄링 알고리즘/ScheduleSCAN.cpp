#include <iostream>
using namespace std;
#include "ScheduleSCAN.h"

// 생성자: 부모 클래스 Schedule의 생성자를 호출하여 초기화
ScheduleSCAN::ScheduleSCAN(string name, int floor[], int current)
	: Schedule(name, floor, current)
{ }

// 이동 방향에서 가장 가까운 층으로 이동. 끝까지 가면 방향 전환
// 시작은 현재 엘리베이터가 있는 위치에서 위쪽 방향

void ScheduleSCAN::run() {
	showMessage();
	showCurrent(); // 현재 엘리베이터 위치를 출력한다. 
	showFloor(); // 현재 요청된 층들을 출력한다.

	// 현재 층부터 30층까지 올라가면서
	for (int i = current; i <= MAX_FLOOR; i++) {
		for (int j = 0; j < 5; j++) {		// 요청된 5개 층을 확인한다.
			if (floor[j] == i) {			// 요청된 층과 일치하면
				cout << i << "층으로 갑니다." << ' ';		// 해당 층으로 이동한다.
				movingDistance += i - current;	// 올라온 층에서 이전 층을 빼서 이동거리로 더한다.
				current = i;					// 현재 위치 갱신
				cout << "누적 이동 거리는 " << getMovingDistance() << endl; // 누적 이동 거리 출력
				floor[j] = 0;	// 배열에서 방문한 층을 0으로 설정
			}
		}
	}

	// 현재 층부터 1층까지 내려가면서
	for (int i = current; i >= 1; i--) {	
		for (int j = 0; j < 5; j++) {		// 요쳥된 5개 층을 확인한다.
			if (floor[j] == i) {			// 배열에 저장된 값과 같으면
				cout << i << "층으로 갑니다." << ' ';		// 해당 층으로 이동한다.
				movingDistance += current - i;	// 이전 층에서 내려온 층을 빼서 이동거리로 더한다.
				current = i;					// 현재 위치 갱신	
				cout << "누적 이동 거리는 " << getMovingDistance() << endl;	// 누적 이동거리 출력
				floor[j] = 0;	// 배열에서 방문한 층을 0으로 설정
			}
		}
	}
	showCurrent();	// 현재 엘리베이터 위치를 출력
	cout << "총 이동 거리는 " << getMovingDistance() << endl;	 // 총 이동 거리 출력
}