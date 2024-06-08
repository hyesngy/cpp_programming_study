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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }

	
	//연산자 함수 -> 클래스의 멤버 함수로 구현
	/*void operator+=(int add) {
		price += add;
	}
	void operator-=(int minus) {
		price -= minus;
	}*/

	//연산자 함수 -> 클래스 외부 함수로 구현
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
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;	// 책 a의 가격 500원 증가
	b -= 500;	// 책 b의 가격 500원 감소
	a.show();
	b.show();
}