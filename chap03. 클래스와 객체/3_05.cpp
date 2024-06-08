#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

class Random {
public:
	Random();
	int next();
	int nextInRange(int from, int to);
};

Random::Random() {

}

int Random::next() {
	return rand();
}

int Random::nextInRange(int from, int to) {
	return (rand() % (to - from + 1) + from);
}

int main() {
	srand((unsigned)time(0));

	Random r;
	cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "4까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;

}