#include <iostream>
#include <string>
using namespace std;

int main() {

	string pw, input;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> pw;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> input;

	if (pw == input)
		cout << "�����ϴ�\n";
	else
		cout << "Ʋ���ϴ�\n";

	return 0;
}