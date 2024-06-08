#include <iostream>
#include <string>
using namespace std;

int main() {

	string pw, input;

	cout << "새 암호를 입력하세요>>";
	cin >> pw;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> input;

	if (pw == input)
		cout << "같습니다\n";
	else
		cout << "틀립니다\n";

	return 0;
}