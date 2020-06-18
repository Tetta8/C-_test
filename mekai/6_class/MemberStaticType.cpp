#include <iostream>
#include <typeinfo>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

int main(){
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");

    Member* ptr = &mineya;
    Member& ref = mineya;

    cout << "ptrが指す先は" << typeid(*ptr).name() << "型オブジェクトです。" << endl;
    cout << "refの参照先は" << typeid(ref).name() << "型オブジェクトです。" << endl;

    return 0;
}