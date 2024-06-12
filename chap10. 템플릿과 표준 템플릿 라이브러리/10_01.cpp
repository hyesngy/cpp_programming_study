#include <iostream>
using namespace std;

template <class T>
T biggest(T x[], int size) {
	T max = x[0];
	for (int i = 1; i < size; i++) {
		if (x[i] > max)
			max = x[i];
	}
	return max;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 1.1, 50.5, 123.1, 8.8, 10.2 };
	cout << biggest(y, 5) << endl;

}