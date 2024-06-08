#include <iostream>
using namespace std;

class Matrix {
	int mem[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		mem[0] = a; mem[1] = b; mem[2] = c; mem[3] = d;
	}
	void show() {
		cout << "Matrix = { " << mem[0] << ' ' << mem[1] << ' ' << mem[2] << ' ' << mem[3] << " }" << endl;
	}
	
	Matrix operator+(Matrix& op2) {
		Matrix tmp(this->mem[0] + op2.mem[0], this->mem[1] + op2.mem[1], this->mem[2] + op2.mem[2], this->mem[3] + op2.mem[3]);
		return tmp;
	}

	void operator+=(Matrix& op) {
		for (int i = 0; i <= 3; i++)
			this->mem[i] += op.mem[i];
	}

	bool operator==(Matrix& op) {
		for (int i = 0; i <= 3; i++) {
			if (this->mem[i] != op.mem[i])
				return false;
		}
		return true;
	}

	/* friend 함수로 구현
	friend Matrix operator+(Matrix& op1, Matrix& op2);
	friend void operator+=(Matrix& op1, Matrix& op2);
	friend bool operator==(Matrix& op1, Matrix& op2);
	*/
};

/*
Matrix operator+(Matrix& op1, Matrix& op2) {
	Matrix tmp(op1.mem[0] + op2.mem[0], op1.mem[1] + op2.mem[1], op1.mem[2] + op2.mem[2], op1.mem[3] + op2.mem[3]);
	return tmp;
}

void operator+=(Matrix& op1, Matrix& op2) {
	for (int i = 0; i <= 3; i++)
		op1.mem[i] += op2.mem[i];
}

bool operator==(Matrix& op1, Matrix& op2) {
	for (int i = 0; i < 3; i++) {
		if (op1.mem[i] != op2.mem[i])
			return false;
	}
	return true;
}
*/

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}