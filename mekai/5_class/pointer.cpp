#include <iostream>
#include "Member.h"
#include "VipMember.h"

using namespace std;

int main(){
    Member kaneko("金子健太", 15, 75.2);
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");

    Member* pm1 = &kaneko;
    cout << "pm1の氏名：" << pm1->name() << endl;

    Member* pm2 = &mineya;
    cout << "pm2の氏名：" << pm2->name() << endl;
    // cout << "pm2の特典：" << pm2->get_privilege() << endl;

    // VipMember* pv1 = &kaneko;
    // cout << "pv1の氏名：" << pv1->name() << endl;

    VipMember* pv2 = &mineya;
    cout << "pv2の氏名：" << pv2->name() << endl;
    cout << "pv2の特典：" << pv2->get_privilege() << endl;
}ohaおは