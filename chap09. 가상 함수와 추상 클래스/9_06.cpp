#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;	//스택에 n을 push. 스택이 full이면 return false
	virtual bool pop(int& n) = 0;	//스택에서 팝한 정수를 n에 저장. 스택이 empty이면 return false
	virtual int size() = 0;	// 현재 스택에 저장된 정수 개수 리턴
};

class MyStack :public AbstractStack {
private:
	int capacity, top = -1;
	int* mem;
public:
	MyStack(int capacity) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~MyStack() { delete[] mem; }

	bool push(int n);
	bool pop(int& n);
	int size() { return top + 1; }
};

bool MyStack::push(int n) {
	if (top == capacity - 1)
		return false;
	else {
		mem[++top] = n;
		return true;
	}
}
bool MyStack::pop(int& n) {
	if (top == -1)
		return false;
	else {
		n = mem[top--];
		return true;
	}
}

int main() {
	MyStack mStack(100);
	int x, result = 0;
	cout << "스택에 삽입할 5개의 정수 입력 : ";
	for (int i = 0; i < 5; i++) {
		cin >> x;
		if (!mStack.push(x)) {
			cout << "스택이 가득 찼습니다.\n";
		}
		
	}
	cout << "스택용량:" << mStack.size() << endl;

	cout << "스택의 모든 원소를 팝하여 출력 : ";
	while (mStack.size() != 0) {
		if (mStack.pop(result)) {
			cout << result << ' ';    // 스택에서 pop
		}
	}
	cout << "스택용량:" << mStack.size() << endl;
}