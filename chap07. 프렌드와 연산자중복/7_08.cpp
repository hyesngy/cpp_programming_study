#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원" << endl; }

	/* 클래스 내부 함수로 구현
	Circle operator++() {
		++this->radius;
		return *this;
	}

	Circle operator++(int x) {
		Circle temp = *this;
		++this->radius;
		return temp;
	}
	
	Circle& operator=(const Circle& op1) {
		this->radius = op1.radius;
		return *this;
	}
	*/

	// friend 함수로 구현 
	friend Circle& operator++(Circle& op1);
	friend Circle operator++(Circle& op1, int x);
	friend Circle operator=(Circle& op1, Circle op2);
};

// 전위 증가 연산자
Circle& operator++(Circle& op1) {
	++op1.radius;
	return op1;
}

// 후위 증가 연산자
Circle operator++(Circle& op1, int x) {
	Circle tmp = op1;
	op1.radius++;
	return tmp;
}

Circle& operator=(Circle& op1, Circle op2) {
	op1.radius=op2.radius
}

int main() {
	Circle a(5), b(4);
	++a;	// 반지름을 1 증가 시킨다.
	b = a++;	// 반지름을 1 증가 시킨다.
	a.show();
	b.show();
}