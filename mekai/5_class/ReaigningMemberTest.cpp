#include <iostream>
#include "ReaigningMember.h"

using namespace std;

int main(){
    ResigningMember oda("織田信子", 31, 48.7);

    cout << "番号＝" << oda.no() << endl;
    // cout << "氏名＝" << oda.name() << endl;
    cout << "体重＝" << oda.get_weight();
    // oda.set_weight(45.3);
}