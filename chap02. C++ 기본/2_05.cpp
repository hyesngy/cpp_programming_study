#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char text[100];

	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(text, 100);

	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (text[i] == 'x')
			count++;
	}
	cout << "x�� ������ " << count << endl;

	return 0;
}