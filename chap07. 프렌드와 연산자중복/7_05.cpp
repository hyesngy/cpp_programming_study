#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color(int r=0, int g=0, int b=0) { this->red = r; this->green = g; this->blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	
	friend Color operator+(Color op1, Color op2);
	friend bool operator==(Color op1, Color op2);
};

Color operator+(Color op1, Color op2) {
	int r = 0, g = 0, b = 0;
	r = op1.red + op2.red;
	g = op1.green + op2.green;
	b = op1.blue + op2.blue;
	Color newColor(r, g, b);
	return newColor;
}

bool operator==(Color op1, Color op2) {
	if (op1.red == op2.red && op1.green == op2.green && op1.blue == op2.blue)
		return true;
	else
		return false;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "����� ����";
	else
		cout << "����� �ƴ�";
}