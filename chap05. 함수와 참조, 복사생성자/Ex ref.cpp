#include <iostream>
using namespace std;

int main() {
	int n;
	int& refn = n;

	n = 100;
	cout << refn<<endl;

	refn++;
	cout << n << endl;

	int* p = &refn;
	*p = 300;
	cout << n << endl;

}