#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	
	//������ �Լ� -> Ŭ������ ��� �Լ��� ����
	/*void operator+=(int add) {
		price += add;
	}
	void operator-=(int minus) {
		price -= minus;
	}*/

	//������ �Լ� -> Ŭ���� �ܺ� �Լ��� ����
	friend void operator+=(Book &book, int add);
	friend void operator-=(Book &book, int minus);
};

void operator+=(Book &book, int add) {
	book.price += add;
}

void operator-=(Book &book, int minus) {
	book.price -= minus;
}


int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;	// å a�� ���� 500�� ����
	b -= 500;	// å b�� ���� 500�� ����
	a.show();
	b.show();
}