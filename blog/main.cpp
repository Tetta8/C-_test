// 本サンプルの目的
// C++における継承の設定による違いを把握すること
// ■継承の種類
// ・public
// ・private
// ・protected
// ■仮想関数とは
// ・virtual
// ■フレンド関数との関係
// ・

// プログラムの内容
// 2つの値を引数で受け取り四則演算を行う。
// 四則演算ごとに異なるクラスを作る
// 共通メソッドは「計算する値をセットするメソッド」、「計算結果を返すメソッド」、「計算式を表示するメソッド」

#include <iostream>
#include "sample.h"

using namespace std;

int main(){
    Add add_obj;
    int temp = 0;

    cout << "【Addクラスの呼び出し】" << endl;
    add_obj.set_value(10, 5);
    temp = add_obj.calcu();
    cout << "calcuの結果：" << temp << endl;
    add_obj.disp();

    cout << "【Baseクラスの呼び出し】" << endl;
    add_obj.Base::set_value(10, 5);
    temp = add_obj.Base::calcu();
    cout << "calcuの結果：" << temp << endl;
    add_obj.Base::disp();
    
    return 0;
}