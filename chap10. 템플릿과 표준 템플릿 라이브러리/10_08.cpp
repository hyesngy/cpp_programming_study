#include <iostream>
using namespace std;

class Comparable {	// 추상 클래스
public:
	virtual bool operator > (Comparable& op2) = 0;	//순수 가상 함수
	virtual bool operator < (Comparable& op2) = 0;	//순수 가상 함수
	virtual bool operator == (Comparable& op2) = 0;	//순수 가상 함수
};

class Circle :public Comparable{
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator > (Comparable& op2) {
		Circle* p;
		p = (Circle*)&op2;
		if (this->radius > p->getRadius()) return true;
		else return false;
	}
	bool operator < (Comparable& op2) {
		Circle* p;
		p = (Circle*)&op2; 
		if (this->radius < p->getRadius()) return true;
		else return false;
	}
	bool operator == (Comparable& op2) {
		Circle* p;
		p = (Circle*)&op2;
		if (this->radius == p->getRadius()) return true;
		else return false;
	}
};

template <class T> T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;

}