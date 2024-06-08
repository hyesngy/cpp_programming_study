#include "School.h"
#include <iostream>
using namespace std;

//생성자
School::School(string name) {
	this->name = name;
}

//소멸자
School::~School() {
	delete[] p;	
}

//이름 검색하면 학점 출력
void School::searchByName() {
	cout << "***** 이름으로 검색하면 학점을 출력합니다. *****" << endl;

	while (true) {
		cout << "이름>>";
		string name;
		cin >> name;	// 이름 입력

		if (name == "그만") {	// 그만 입력 시 종료
			cout << "검색을 종료합니다." << endl;
			return;
		}

		bool found = false;	//학생 찾으면 true, 못찾으면 false 체크

		for (int i = 0; i < size; i++) {
			if (p[i].getName() == name) {	//학생 찾은 경우
				cout << name << "은 " << p[i].getGrade() << "입니다." << endl;
				found = true;
				break;	//찾으면 종료
			}
		}
		if(!found)	//학생 못찾은 경우
			cout << name << " 학생은 존재하지 않습니다" << endl;
	}
}

// 모든 학생들 출력
void School::showAll(){
	cout << "***** 전체 학생을 출력합니다.*****" << endl;
	for (int i = 0; i < size; i++) {	//입학생 수만큼 반복해서 출력
		p[i].show();
	}
}

// 모든 학생의 이름과 학과, 점수 입력
void School::read() {
	cout << "입학생수>>";
	cin >> size;	//입학생 수 입력

	p = new Student[size];	//size만큼 student객체의 배열 생성
	cout << "***** 입학생의 이름과 학과, 점수를 입력합니다.*****" << endl;

	for (int i = 0; i < size; i++) {	//size만큼
		string name, dept;
		int score;
		cout << i+1 << " : 이름, 학과, 점수>>";
		cin >> name >> dept >> score;	//지역변수에 저장받고
		p[i].set(name, dept, score);	//set()이용해서 배열에 저장
	}
}

void School::run() {
	cout << "*****컴퓨터공학부의 입학 관리 프로그램입니다.*****" << endl;
	read();	//전체입력
	searchByName();	//이름검색->학점출력
	showAll(); //전체출력
	cout << "*****컴퓨터공학부의 입학 관리 프로그램을 종료합니다.*****" << endl;
}