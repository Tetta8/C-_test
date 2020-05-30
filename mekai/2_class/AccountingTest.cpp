#include<iostream>
#include "Accounting.h"
#include "Date.h"

using namespace std;

int main(){
    Accounting nakano("中野隼人", 1000, Date(2125, 1, 24));
    Accounting yamada("山田宏文", 200, Date(2023, 7, 15));

    nakano.spend(200);
    yamada.earn(100);

    cout << "中野君" << endl;
    cout << "氏　名：" << nakano.name() << endl;
    cout << "資　産：" << nakano.asset() << "円" << endl;
    cout << "誕生日：" << nakano.birthday().year() << "年"
                      << nakano.birthday().month() << "月"
                      << nakano.birthday().day() << "日" << endl;

    cout << "山田君" << endl;
    cout << "氏　名：" << yamada.name() << endl;
    cout << "資　産：" << yamada.asset() << "円" << endl;
    cout << "誕生日：" << yamada.birthday() << endl;
}