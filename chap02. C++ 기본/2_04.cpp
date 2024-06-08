#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	cout << "5 개의 실수를 입력하라>>";
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

	cout << "제일 큰 수 = " << max << endl;


	return 0;
}
/*else if문을 사용하는 경우에는 각 조건이 순차적으로 검사되기 때문에,
첫 번째로 만족하는 조건에서 최댓값이 업데이트되고 나면
이후의 조건들은 더 이상 검사되지 않습니다. 따라서 다른 방법을 사용해야 합니다.*/