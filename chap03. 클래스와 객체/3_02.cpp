#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class Date {
public:
    int year;
    int month;
    int day;

    Date(int y, int m, int d);
    Date(string date);

    int getYear();
    int getMonth();
    int getDay();
    void show();
};

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string date) {
    char delimiter = '/';
    replace(date.begin(), date.end(), delimiter, ' ');
    stringstream dateStream(date);
    dateStream >> year >> month >> day;
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

void Date::show() {
    cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");

    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}
