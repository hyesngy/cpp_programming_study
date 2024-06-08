#include <iostream>
using namespace std;

// �߻� Ŭ����
class LoopAdder {
	string name;	//������ �̸�
	int x, y, sum;	// x~y �� : sum
	void read();	// x,y�� �о� ���̴� �Լ�
	void write();	// sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name = "") {	// ������ �̸��� �޴´�. �ʱ갪�� ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;	// ���� ���� �Լ�. ������ ���� ���� ���ϴ� �Լ�
public:
	void run();	//������ �����ϴ� �Լ�
};

void LoopAdder::read() {	// x,y �Է�
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ���>> ";
	cin >> x >> y;
}
void LoopAdder::write() {	// ��� sum ���
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�." << endl;
}
void LoopAdder::run() {
	read();		// x,y�� �д´�.
	sum = calculate();	// ���
	write();	// ��� sum ���
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