#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "") :Circle(radius) { this->name = name; }
	void show() { cout << "반지름이 " << getRadius() << "인 " << name << endl; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

int main() {
	/* 8_01
	NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
	waffle.show();
	*/
	
	// 8_02
	int r, max_index = 0;
	string name;
	NamedCircle pizza[5];
	
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		cin >> r >> name;
		pizza[i].setRadius(r);
		pizza[i].setName(name);

		if (pizza[i].getArea() > pizza[max_index].getArea()) {
			max_index = i;
		}
	}
	
	cout << "가장 면적이 큰 피자는 " << pizza[max_index].getName() << "입니다" << endl;
}