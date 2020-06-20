#include <iostream>
#include <typeinfo>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

void ptr_ref(const Member* ptr, const Member& ref){
    cout << "ptrが指す先は" << typeid(*ptr).name() << "型オブジェクトです。" << endl;
    cout << "refが指す先は" << typeid(ref).name()  << "型オブジェクトです。" << endl << endl;
}

int main(){
    Member kaneko("金子健太", 15, 75.2);
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
    SeniorMember susaki("洲崎賢一", 43, 63.7, 3);

    cout << kaneko.name() << endl;
    ptr_ref(&kaneko, kaneko);

    cout << mineya.name() << endl;
    ptr_ref(&mineya, mineya);

    cout << susaki.name() << endl;
    ptr_ref(&susaki, susaki);
}