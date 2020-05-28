#include<iostream>

using namespace std;

class Date{
    int y;
    int m;
    int d;
    mutable int counter;

public:
    Date(int yy, int mm, int dd){
        y = yy;
        m = mm;
        d = dd;
        counter = 0;
    }
    int year() const{counter++; return y;}
    int month() const{counter++; return m;}
    int day() const{counter++; return d;}
    int count() const{return counter;}
};

int main(){
    const Date birthday(1963,  11, 18);

    cout << "birthday = " << birthday.year() << "年"
                          << birthday.month() << "月"
                          << birthday.day() << "日"
                          << endl;
    cout << "birthdayのメンバ関数を" << birthday.count() << "回呼び出しました" << endl;
}