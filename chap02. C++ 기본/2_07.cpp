#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char input[100];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ��� >> ";
		cin.getline(input, 100);

		if (strcmp(input, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
	return 0;
}