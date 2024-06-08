#include <iostream>
using namespace std;

int sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	return sum;
}

int main() {

	int n = 0;

	cout << "끝 수를 입력하세요>>";
	cin >> n;

	cout << "1에서 " << n << "까지의 합은 " << sum(n) << " 입니다.\n";

	return 0;
}