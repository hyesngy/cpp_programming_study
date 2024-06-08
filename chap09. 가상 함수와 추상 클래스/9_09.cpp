#include <iostream>
using namespace std;

class Printer {
protected:
	string model;	//�𵨸�
	string manuFacturer; // ������
	int printedCount;	 // �μ� �ż�
	int availableCount;  // �μ� ���� �ܷ�
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manuFacturer = manufacturer;
		this->availableCount = availableCount;
	}
	virtual void print(int pages) {
		if (availableCount < pages) 
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		else {
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			availableCount -= pages;
		}
	}
	virtual void show() {
		cout << model << " ," << manuFacturer << " ,���� ���� " << availableCount << "��" << endl;
	}
};

class InkjetPrinter : public Printer {
protected:
	int availableInk;	//��ũ �ܷ�
public:
	InkjetPrinter(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void print(int pages);
	void show() { cout << model << " ," << manuFacturer << " ,���� ���� " << availableCount << "�� , ���� ��ũ " << availableInk << endl; }

};

class LaserPrinter : public Printer {
protected:
	int availableToner;	//��� �ܷ�
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) 
		:Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void print(int pages);
	void show() { cout << model << " ," << manuFacturer << " ,���� ���� " << availableCount << "�� , ���� ��� " << availableToner << endl; }
};

void InkjetPrinter::print(int pages) {
	if (availableInk < pages)
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else {
		if (availableCount >= pages) {
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			availableCount -= pages;
			availableInk -= pages;
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
}

void LaserPrinter::print(int pages) {
	if (availableToner < 1)
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else {
		if (availableCount >= pages) {
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			availableCount -= pages;
			availableToner -= 1;
			cout << availableToner;
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;;
	}
}

int main() {
	int printer, pages;
	char ch;
	Printer* p[2];
	p[0] = new InkjetPrinter("Officejet V40", "HP", 5, 10);
	p[1] = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; p[0]->show();
	cout << "������ : "; p[1]->show();
	cout << endl;

	while (true) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		p[printer - 1]->print(pages);
		p[0]->show();
		p[1]->show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> ch;
		
		if (ch == 'n')
			break;

		cout << endl;
	}
}