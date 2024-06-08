#include <iostream>
#include <string>
using namespace std;

int main() {

	char menu[20];
	int cup, fee = 0, sum = 0;

	while (true) {
		if (sum >= 20000) {
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
			break;
		}
		cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n주문>> ";
		cin >> menu >> cup;

		if (strcmp(menu, "에스프레소") == 0) {
			fee = 2000 * cup;
			cout << fee;
			sum += fee;
		}
		else if (strcmp(menu, "아메리카노") == 0) {
			fee = 2300 * cup;
			cout << fee;
			sum += fee;
		}
		else if (strcmp(menu, "카푸치노") == 0) {
			fee = 2500 * cup;
			cout << fee;
			sum += fee;
		}
		cout << "원입니다. 맛있게 드세요\n";

	}

	return 0;
}