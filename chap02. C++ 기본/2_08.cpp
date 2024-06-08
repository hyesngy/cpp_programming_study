#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {

	char name[100], max_name[100];
	int max = 0;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;

		if (strlen(name) > max) {
			max = strlen(name);
			strcpy(max_name, name);
		}
	}
	cout << "가장 긴 이름은 " << max_name << endl;

	return 0;
}