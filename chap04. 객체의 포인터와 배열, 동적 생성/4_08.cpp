#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int count = 0;
	int size = 0;

	cout << "���� ���� >>";
	cin >> size;
	Circle* circles = new Circle[size];

	for (int i = 0; i < size; i++) {
		int r;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

}