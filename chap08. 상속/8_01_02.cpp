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
	void show() { cout << "�������� " << getRadius() << "�� " << name << endl; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

int main() {
	/* 8_01
	NamedCircle waffle(3, "waffle"); // �������� 3�̰� �̸��� waffle�� ��
	waffle.show();
	*/
	
	// 8_02
	int r, max_index = 0;
	string name;
	NamedCircle pizza[5];
	
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		cin >> r >> name;
		pizza[i].setRadius(r);
		pizza[i].setName(name);

		if (pizza[i].getArea() > pizza[max_index].getArea()) {
			max_index = i;
		}
	}
	
	cout << "���� ������ ū ���ڴ� " << pizza[max_index].getName() << "�Դϴ�" << endl;
}