#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;	// src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0;	// src 단위 명칭
	virtual string getDestString() = 0;		// dest 단위 명칭
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
	string source = "원";
	string dest = "달러";
protected:
	virtual double convert(double src) { return src / ratio; }
	virtual string getSourceString() { return source; }
	virtual string getDestString() { return dest; }
public:
	WonToDollar(double ratio) :Converter(ratio) {}
};


int main() {
	WonToDollar wd(1010);	// 1 달러에 1010원
	wd.run();
}