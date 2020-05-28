#include<iostream>
#include "Date.h"

using namespace std;

int main(){
    Date P;
    Date q(2021);
    Date r(2022, 2);
    Date s(2023, 3, 5);

    
    cout << "P = " << P.year() << "年" << P.month() << "月" << P.day() << "日" << endl;
    cout << "q = " << q.year() << "年" << q.month() << "月" << q.day() << "日" << endl;
    cout << "r = " << r.year() << "年" << r.month() << "月" << r.day() << "日" << endl;
    cout << "a = " << s.year() << "年" << s.month() << "月" << s.day() << "日" << endl;
}