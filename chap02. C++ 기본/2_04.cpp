#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;

	float max = a;

	if (max < a)
		max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	if (max < e)
		max = e;

	cout << "���� ū �� = " << max << endl;


	return 0;
}
/*else if���� ����ϴ� ��쿡�� �� ������ ���������� �˻�Ǳ� ������,
ù ��°�� �����ϴ� ���ǿ��� �ִ��� ������Ʈ�ǰ� ����
������ ���ǵ��� �� �̻� �˻���� �ʽ��ϴ�. ���� �ٸ� ����� ����ؾ� �մϴ�.*/