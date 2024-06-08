#include <iostream>
using namespace std;

int main() {
	int* array = new int[5];
	float average = 0.0f;

	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		average += array[i];
	}
	average /= 5;

	cout << "평균 " << average << endl;

}