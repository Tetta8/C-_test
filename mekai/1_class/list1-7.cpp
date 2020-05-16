#include<string>
#include<iostream>
#include"list1-5.h"

using namespace std;

void print_Accounting(string title, Accounting* p){
    cout << title << "\"" << p->name() << "\"" << p->asset() << "円\n";
}

int main(){
    Accounting nakano("中野隼人", 1000);
    Accounting yamada("山田宏文", 200);

    nakano.spend(200);
    yamada.earn(100);

    print_Accounting("■中野：", &nakano);
    print_Accounting("■山田：", &yamada);
}
