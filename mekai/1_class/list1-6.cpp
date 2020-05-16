#include<string>
#include<iostream>
#include"list1-5.h"

using namespace std;

Accounting::Accounting(string name, long amnt){
    full_name = name;
    crnt_asset = amnt;
}

void Accounting::earn(long amnt){
    crnt_asset += amnt;
}

void Accounting::spend(long amnt){
    crnt_asset -= amnt;
}

int main(){
    return 0;
}