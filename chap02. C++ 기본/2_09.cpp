#include <iostream>
#include <string>
using namespace std;

int main() {

	char name[30], address[100];
	int age;

	cout << "�̸���?";
	cin.getline(name, 30);
	cout << "�ּҴ�?";
	cin.getline(address, 100);
	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��\n";

	return 0;
}
