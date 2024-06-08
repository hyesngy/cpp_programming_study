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
	cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water << "  설탕:" << sugar << endl;

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
	CoffeeMachine java(5, 10, 3); // 커피량: 5，물량: 10, 설탕: 6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로채우기
	java.show(); // 현재 커피 머신의 상태 출력
}