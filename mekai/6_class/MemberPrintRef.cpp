#include <iostream>
#include "Member.h"
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

void put_member(const Member& m){
    cout << (m.get_weight() >= 65 ? "●" : " ");
    m.print();
}

int main(){
    Member kaneko("金子健太", 15, 75.2);
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
    SeniorMember susaki("洲崎賢一", 43, 63.7, 3);

    put_member(kaneko);
    put_member(mineya);
    put_member(susaki);
}