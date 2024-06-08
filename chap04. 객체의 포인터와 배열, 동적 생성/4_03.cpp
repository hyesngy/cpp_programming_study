#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;

	cout << "문자열 입력>> ";
	getline(cin, str);

	/*4_03(1)
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a')
			count++;
	}
	*/

	//4_03(2)
	int ind = 0;
	while (true) {
		ind = str.find('a', ind + 1);
		if (ind == -1) 
			break;
		else 
			count++;
	}

	cout << "문자 a는 " << count << "개 있습니다." << endl;

	return 0;
}