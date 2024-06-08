#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;	// �迭�� ũ��
	int* mem;	// ���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100) {	// ������ : protected
		this->capacity = capacity; 
		mem = new int[capacity];
	}
	~BaseArray() { delete [] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
private:
	int front = 0;
	int rear = -1;
public:
	MyQueue(int capacity=100):BaseArray(capacity){}
	void enqueue(int n) { put(++rear, n); }
	int dequeue() { return get(front++);  }
	int capacity() { return getCapacity(); }
	int length() { return (rear - front + 1); }
};


int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);	// ť�� ����
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';	// ť���� �����Ͽ� ���
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;

}