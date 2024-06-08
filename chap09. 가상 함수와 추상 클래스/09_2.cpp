#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;	// src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0;	// src ���� ��Ī
	virtual string getDestString() = 0;		// dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
	string source = "Km";
	string dest = "Mile";
protected:
	virtual double convert(double src) { return src / ratio; }
	virtual string getSourceString() { return source; }
	virtual string getDestString() { return dest; }
public:
	KmToMile(double ratio) :Converter(ratio) {}
};


int main() {
	KmToMile toMile(1.609344);	// 1 mile�� 1.609344	 Km
	toMile.run();
}