#include <iostream>
using namespace std;

bool average(int a[], int size, int &avg) {
	if (size <= 0) {
		return false;	//���� �߻�
	}

	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];

	avg= (sum / size);
	return true;
}

int main() {
	int x[] = { 1,2,7,2 };
	int avg;
	bool res;
	res=average(x, 4,avg);
	if (res == false) {
		cout << "�Ű���������" << endl;
	}
	else
		cout << avg << endl;
}