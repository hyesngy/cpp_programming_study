#include <iostream>
using namespace std;

class AbstractGate {	//추상 클래스
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;

};

class ANDGate : public AbstractGate {
public:
	bool operation() {
		if (x == true && y == true) return true;
		else false;
	}
};

class ORGate : public AbstractGate {
public:
	bool operation() {
		if (x == false && y == false) return false;
		else true;
	}
};

class XORGate : public AbstractGate {
public:
	bool operation() {
		if (x == y) return false;
		else true;
	}
};


int main() {
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);

	cout.setf(ios::boolalpha);	// 불린 값을 "true", "false" 문자열로 출력할 것을 지시
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
	 
}