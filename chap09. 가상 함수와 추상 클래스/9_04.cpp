#include <iostream>
using namespace std;

// 추상 클래스
class LoopAdder {
	string name;	//루프의 이름
	int x, y, sum;	// x~y 합 : sum
	void read();	// x,y값 읽어 들이는 함수
	void write();	// sum을 출력하는 함수
protected:
	LoopAdder(string name = "") {	// 루프의 이름을 받는다. 초깃값은 ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;	// 순수 가상 함수. 루프를 돌며 합을 구하는 함수
public:
	void run();	//연산을 진행하는 함수
};

void LoopAdder::read() {	// x,y 입력
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요>> ";
	cin >> x >> y;
}
void LoopAdder::write() {	// 결과 sum 출력
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다." << endl;
}
void LoopAdder::run() {
	read();		// x,y를 읽는다.
	sum = calculate();	// 계산
	write();	// 결과 sum 출력
}

class WhileLoopAdder :public LoopAdder {
protected:
	virtual int calculate();
public:
	WhileLoopAdder(string name):LoopAdder(name){}
};

class DoWhileLoopAdder :public LoopAdder {
protected:
	virtual int calculate();
public:
	DoWhileLoopAdder(string name) :LoopAdder(name) {}
};

int WhileLoopAdder::calculate()
{
	int sum = 0;
	int x = getX(); int y = getY();
	while (x <= y) {
		sum += x;
		x++;
	}
	return sum;
}

int DoWhileLoopAdder::calculate()
{
	int sum = 0;
	int x = getX(), y = getY();
	do
	{
		sum += x;
		x++;
	} while (x<=y);
	return sum;

}

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder dowhileLoop("Do while Loop");
	
	whileLoop.run();
	dowhileLoop.run();
}