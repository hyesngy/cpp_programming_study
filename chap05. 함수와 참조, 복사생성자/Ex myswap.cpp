#include <iostream>
using namespace std;

void myswap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 9;
	int b = 2;
	cout << a << "," << b << endl;
	myswap(a, b);
	cout << a << "," << b << endl;

}