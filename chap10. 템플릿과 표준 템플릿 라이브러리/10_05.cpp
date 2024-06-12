#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* arr= new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		arr[i] = a[i];
	}
	for (int j = 0; j < sizeb; j++) {
		arr[j + sizea] = b[j];
	}
	return arr;
}

int main() {
	int x[] = { 1,2,3 };
	int y[] = { 4,5,6,7,8 };
	int* z = concat(x, 3, y, 5);
	for (int i = 0; i < 8; i++) cout << z[i] << ' ';
	cout << endl;

	char a[] = { 'H','e','l','l','o'};
	char b[] = { ' ','W','o','r','l','d','!' };
	char* c = concat(a, 5, b, 7);
	for (int i = 0; i < 12; i++) cout << c[i] << ' ';
	cout << endl;

	delete[] z;
	delete[] c;

}