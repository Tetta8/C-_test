#include <iostream>
#include "IntTwin.h"

using namespace std;

int main(){
    const IntTwin t1(15, 37);

    cout << "t1の第一値は" << t1.first()  << "で"
         <<     "第二値は" << t1.second() << "です。" << endl;

    IntTwin t2(t1);

    cout << "t2の第一値は" << t2.first()  << "で"
         <<     "第二値は" << t2.second() << "です。" << endl;

    cout << "t2の値を変更します。" << endl;
    cout << "t2の新しい第一値："; cin >> t2.first();
    cout << "t2の新しい第二値："; cin >> t2.second();

    if(!t2.ascending()){
        cout << "第一値＜第二値が成立しませんのでソートします。" << endl;
        t2.sort();
        cout << "t2の第一値は" << t2.first()  << "に"
             <<     "第二値は" << t2.second() << "に変更されました。" << endl;
        
    }

    return 0;
}