#include <iostream>
using namespace std;

template <class T> bool search(T find, T arr[], int size)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == find)
			return true;
	}
	return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�" << endl;
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�" << endl;

	char c[] = { 'h','e','l','l','o','!' };
	if (search('a', c, 6)) cout << "'a'�� �迭 c�� ���ԵǾ� �ִ�" << endl;
	else cout << "'a'�� �迭 c�� ���ԵǾ� ���� �ʴ�" << endl;


}