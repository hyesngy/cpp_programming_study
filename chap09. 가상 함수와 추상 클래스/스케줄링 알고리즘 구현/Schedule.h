#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <string>
using namespace std;
class Schedule { // �߻� Ŭ����
protected:
	string name; // ������ �˰��� �̸�
	int floor[5]; // �����ϴ� �� ��ȣ 5�� ����
	int current; // ��������Ʈ�� �ִ� ���� �� ��ȣ
	int movingDistance = 0; // �� �̵��Ÿ�. 0���� �ʱ�ȭ
public:
	Schedule(string name, int floor[], int current = 0);
	int getMovingDistance(); // �� �̵� �Ÿ� movingDistance ����
	virtual void run() = 0; // �������� �����Ѵ�. ��ӹ޴� Ŭ�������� �ݵ�� �ۼ��ʿ�
	void showMessage();
	void showFloor();
	void showCurrent();
	static const int MAX_FLOOR = 30; // �ִ� 30��
};
#endif