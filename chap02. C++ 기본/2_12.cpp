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

	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	cout << "1���� " << n << "������ ���� " << sum(n) << " �Դϴ�.\n";

	return 0;
}