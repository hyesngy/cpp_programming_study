#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char input[100];

	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요 >> ";
		cin.getline(input, 100);

		if (strcmp(input, "yes") == 0) {
			cout << "종료합니다..." << endl;
			break;
		}
	}
	return 0;
}