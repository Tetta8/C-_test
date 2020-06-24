#include <iostream>
#include <exception>

using namespace std;

int add(int v1, int v2){
    if(v1 < 0 || v1 > 99)
        throw out_of_range("v1の値が不正。");
    if(v2 < 0 || v2 > 99)
        throw out_of_range("v2の値が不正。");

    int sum = v1 + v2;
    if(sum < 0 || sum > 99)
        throw overflow_error("オバーフロー。");

    return v1 + v2;
}

int main(){
    int x, y;

    cout << "xの値（0~99）";
    cin >> x;
    cout << "yの値（0~99）";
    cin >> y;

    try{
        cout << "加算した値は" << add(x, y) << "です。" << endl;
    }catch(const logic_error& e){
        cerr << "論理エラー発生：" << e.what() << endl;
    }catch(const runtime_error& e){
        cerr << "実行時エラー発生：" << e.what() << endl;
    }
}