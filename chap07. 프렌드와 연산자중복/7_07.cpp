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

	void operator>>(int arr[4]) {
		arr[0] = this->mem[0]; arr[1] = this->mem[1]; arr[2] = this->mem[2]; arr[3] = this->mem[3];
	}

	void operator<<(int arr[4]) {
		this->mem[0] = arr[0]; this->mem[1] = arr[1]; this->mem[2] = arr[2]; this->mem[3] = arr[3];
	}

	//friend �Լ��� ����
	//friend void operator >>(Matrix op1, int arr[4]);
	//friend void operator <<(Matrix& op1, int arr[4]);
};
/*
void operator >>(Matrix op1, int arr[4]) {
	for (int i = 0; i <= 3; i++)
		arr[i] = op1.mem[i];
}

void operator <<(Matrix& op1, int arr[4]) {
	for (int i = 0; i <= 3; i++)
		op1.mem[i] = arr[i];
}
*/

int main() {
	Matrix a(4,3,2,1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;	// a�� �� ���Ҹ� �迭 x�� ����. x[]�� {4,3,2,1}	
	b << y;	// �迭 y�� ���� ���� b�� �� ���ҿ� ����

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';	//x[] ���
	cout << endl;
	b.show();
}