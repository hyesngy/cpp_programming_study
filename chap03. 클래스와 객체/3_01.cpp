#include <iostream>
using namespace std;

class Tower {
public:
	int height;
	int getHeight();
	Tower();
	Tower(int h);
};

Tower::Tower() {
	height = 1;
}
Tower::Tower(int h) {
	height = h;
}
int Tower::getHeight() {
	return height;
}


int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << endl;
	cout << "높이는 " << seoulTower.getHeight() << endl;

}