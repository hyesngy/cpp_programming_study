#include <iostream>
using namespace std;

int main() {

	int menu = 0, serving;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "���� ������ �������ϴ�\n";
			break;
		}
		else if (menu != 1 && menu != 2 && menu != 3) {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		}
		else {
			cout << "���κ�?";
			cin >> serving;

			switch (menu) {
			case 1:
				cout << "«�� " << serving << "�κ� ���Խ��ϴ�\n";
				break;
			case 2:
				cout << "¥�� " << serving << "�κ� ���Խ��ϴ�\n";
				break;
			case 3:
				cout << "������ " << serving << "�κ� ���Խ��ϴ�\n";
				break;
			}
		}
	}
	return 0;
}