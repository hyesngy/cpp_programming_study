#include <iostream>
#include <string>
using namespace std;

int main() {

	char menu[20];
	int cup, fee = 0, sum = 0;

	while (true) {
		if (sum >= 20000) {
			cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~\n";
			break;
		}
		cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n�ֹ�>> ";
		cin >> menu >> cup;

		if (strcmp(menu, "����������") == 0) {
			fee = 2000 * cup;
			cout << fee;
			sum += fee;
		}
		else if (strcmp(menu, "�Ƹ޸�ī��") == 0) {
			fee = 2300 * cup;
			cout << fee;
			sum += fee;
		}
		else if (strcmp(menu, "īǪġ��") == 0) {
			fee = 2500 * cup;
			cout << fee;
			sum += fee;
		}
		cout << "���Դϴ�. ���ְ� �弼��\n";

	}

	return 0;
}