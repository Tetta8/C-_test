#include <string>
#include "VipMember.h"
#include "SeniorMember.h"

using namespace std;

int main(){
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");
    SeniorMember susaki("洲崎賢一", 43, 63.7, 3);

    mineya.Member::print();
    susaki.Member::print();
}