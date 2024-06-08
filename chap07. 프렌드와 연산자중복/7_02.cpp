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


	// == 연산자 함수 -> 클래스의 멤버 함수로 구현
	/*
	bool operator==(int price) {
		if (this->price == price) return true;
		else return false;
	}

	bool operator==(string title) {
		if (this->title == title) return true;
		else return false;
	}

	bool operator==(Book book) {
		if (this->title == book.title) return true;
		else return false;
	}
	*/

	// == 연산자 함수 -> 클래스 외부 함수로 구현
	friend bool operator==(Book book, int price);
	friend bool operator==(Book book, string title);
	friend bool operator==(Book book, Book book2);
};

bool operator==(Book book, int price) {
	if (book.price == price) return true;
	else return false;
}

bool operator==(Book book, string title) {
	if (book.title == title) return true;
	else return false;
}

bool operator==(Book book, Book book2) {
	if (book.title == book2.title) return true;
	else return false;
}


int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

	if(a == 30000) cout << "정가 30000원" << endl; // price 비교
	if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if(a == b) cout << "두 책이 같은 책입니다." << endl; // title , price, pages 모두 비교

}