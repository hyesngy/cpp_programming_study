#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;	//���ÿ� n�� push. ������ full�̸� return false
	virtual bool pop(int& n) = 0;	//���ÿ��� ���� ������ n�� ����. ������ empty�̸� return false
	virtual int size() = 0;	// ���� ���ÿ� ����� ���� ���� ����
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
	cout << "���ÿ� ������ 5���� ���� �Է� : ";
	for (int i = 0; i < 5; i++) {
		cin >> x;
		if (!mStack.push(x)) {
			cout << "������ ���� á���ϴ�.\n";
		}
		
	}
	cout << "���ÿ뷮:" << mStack.size() << endl;

	cout << "������ ��� ���Ҹ� ���Ͽ� ��� : ";
	while (mStack.size() != 0) {
		if (mStack.pop(result)) {
			cout << result << ' ';    // ���ÿ��� pop
		}
	}
	cout << "���ÿ뷮:" << mStack.size() << endl;
}