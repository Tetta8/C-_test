#include <iostream>
#include "Member.h"
#include "VipMember0.h"

using namespace std;

void slim_off(Member& m, double dw){
    double weight = m.get_weight();
    if(weight > dw)
        m.set_weight(weight - dw);
}

void slim_off(VipMember0& m, double dw){
    double weight = m.get_weight();
    if(weight > dw)
        m.set_weight(weight - dw);
}

int main(){
    Member kaneko("金子健太", 15, 75.2);
    VipMember0 mineya("峰屋龍次", 17, 89.2, "会費全額免除");

    slim_off(kaneko, 3.7);
    cout << "会員番号" << kaneko.no() << "の" << kaneko.name()
         << "は" << kaneko.get_weight() << "kgです。" << endl;

    slim_off(mineya, 15.3);
    cout << "会員番号" << mineya.no() << "の" << mineya.name()
         << "は" << mineya.get_weight() << "kgで"
         << "特典は" << mineya.get_privilege() << "です。" << endl;
}