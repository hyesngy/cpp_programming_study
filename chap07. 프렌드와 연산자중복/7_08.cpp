#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "�� ��" << endl; }

	/* Ŭ���� ���� �Լ��� ����
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

	// friend �Լ��� ���� 
	friend Circle& operator++(Circle& op1);
	friend Circle operator++(Circle& op1, int x);
	friend Circle operator=(Circle& op1, Circle op2);
};

// ���� ���� ������
Circle& operator++(Circle& op1) {
	++op1.radius;
	return op1;
}

// ���� ���� ������
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
	++a;	// �������� 1 ���� ��Ų��.
	b = a++;	// �������� 1 ���� ��Ų��.
	a.show();
	b.show();
}