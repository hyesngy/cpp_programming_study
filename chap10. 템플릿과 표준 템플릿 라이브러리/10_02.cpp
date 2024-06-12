#include <iostream>
using namespace std;

template <class T> bool equalArrays(T x[], T y[], int size)
{
	for (int i = 0; i < size; i++) {
		if (x[i] != y[i])
			return false;
	}
	return true;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	if (equalArrays(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	int z[] = { 1,10,100,5,3 };
	if (equalArrays(x, z, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	double c[] = { 1.1, 2.2, 3.3, 4.4 };
	double d[] = { 1.1, 2.2, 3.3, 4.4 };
	if (equalArrays(c, d, 4)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	double e[] = { 1.1, 2.2, 3.3, 5.5 };
	if (equalArrays(c, e, 4)) cout << "같다" << endl;
	else cout << "다르다" << endl;

}