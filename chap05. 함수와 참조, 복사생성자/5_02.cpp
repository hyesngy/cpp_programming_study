#include <iostream>
using namespace std;

void half(double& n) {
	n /= 2;
}

int main() {
	double n = 20;
	half(n);	// n/2
	cout << n;	// 10 Ãâ·Â
}