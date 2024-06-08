#include <iostream>
using namespace std;

class Printer {
protected:
	string model;	//모델명
	string manuFacturer; // 제조사
	int printedCount;	 // 인쇄 매수
	int availableCount;  // 인쇄 종이 잔량
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manuFacturer = manufacturer;
		this->availableCount = availableCount;
	}
	virtual void print(int pages) {
		if (availableCount < pages) 
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		else {
			cout << "프린트하였습니다." << endl;
			availableCount -= pages;
		}
	}
	virtual void show() {
		cout << model << " ," << manuFacturer << " ,남은 종이 " << availableCount << "장" << endl;
	}
};

class InkjetPrinter : public Printer {
protected:
	int availableInk;	//잉크 잔량
public:
	InkjetPrinter(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void print(int pages);
	void show() { cout << model << " ," << manuFacturer << " ,남은 종이 " << availableCount << "장 , 남은 잉크 " << availableInk << endl; }

};

class LaserPrinter : public Printer {
protected:
	int availableToner;	//토너 잔량
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) 
		:Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void print(int pages);
	void show() { cout << model << " ," << manuFacturer << " ,남은 종이 " << availableCount << "장 , 남은 토너 " << availableToner << endl; }
};

void InkjetPrinter::print(int pages) {
	if (availableInk < pages)
		cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
	else {
		if (availableCount >= pages) {
			cout << "프린트하였습니다." << endl;
			availableCount -= pages;
			availableInk -= pages;
		}
		else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
}

void LaserPrinter::print(int pages) {
	if (availableToner < 1)
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
	else {
		if (availableCount >= pages) {
			cout << "프린트하였습니다." << endl;
			availableCount -= pages;
			availableToner -= 1;
			cout << availableToner;
		}
		else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;;
	}
}

int main() {
	int printer, pages;
	char ch;
	Printer* p[2];
	p[0] = new InkjetPrinter("Officejet V40", "HP", 5, 10);
	p[1] = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; p[0]->show();
	cout << "레이저 : "; p[1]->show();
	cout << endl;

	while (true) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> printer >> pages;
		p[printer - 1]->print(pages);
		p[0]->show();
		p[1]->show();
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> ch;
		
		if (ch == 'n')
			break;

		cout << endl;
	}
}