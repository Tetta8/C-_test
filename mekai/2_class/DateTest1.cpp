// 日付クラスDate(第2版)の利用例

#include<iostream>
#include "Date.h"

using namespace std;

int main(){
    Date today;

    cout << "今　日は" << today << "です。" << endl;
    cout << "昨　日は" << today.preceding_day() << "です。" << endl;
    cout << "一昨日は" << today.preceding_day().preceding_day() << "です。" << endl;
}