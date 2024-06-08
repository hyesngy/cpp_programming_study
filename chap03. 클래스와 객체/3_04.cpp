#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void show();
	void fill();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << " ��:" << water << "  ����:" << sugar << endl;

}
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}
void CoffeeMachine::drinkEspresso() {
	coffee--;
	water--;
}
void CoffeeMachine::drinkAmericano() {
	coffee--;
	water -= 2;
}
void CoffeeMachine::drinkSugarCoffee() {
	coffee--;
	water -= 2;
	sugar--;
}

int main() {
	CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ�: 5������: 10, ����: 6���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10����ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
}