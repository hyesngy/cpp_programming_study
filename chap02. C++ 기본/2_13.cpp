#include <iostream>
using namespace std;

int main() {

	int menu = 0, serving;

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "오늘 엽업은 끝났습니다\n";
			break;
		}
		else if (menu != 1 && menu != 2 && menu != 3) {
			cout << "다시 주문하세요!!\n";
		}
		else {
			cout << "몇인분?";
			cin >> serving;

			switch (menu) {
			case 1:
				cout << "짬뽕 " << serving << "인분 나왔습니다\n";
				break;
			case 2:
				cout << "짜장 " << serving << "인분 나왔습니다\n";
				break;
			case 3:
				cout << "군만두 " << serving << "인분 나왔습니다\n";
				break;
			}
		}
	}
	return 0;
}