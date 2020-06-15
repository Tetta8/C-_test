#include <new>
#include <iostream>

using namespace std;

class OverFlow { };

int f(int x) throw(const char*, OverFlow){
    
    if(x < 0){
        // cout << 1 << endl;
        throw "おかしい。値が負になっています。";
    }else if(x > 30000){
        // cout << 2 << endl;
        throw OverFlow();
    }else{
        return 2 * x;
    }
}

int main(){
    int a;
    cout << "整数：";
    cin >> a;

    try{
        int b = f(a);
        cout << "その数の2倍は" << b << "です。\n";
    }

    // 参考書の順番通りにするとOverFlowを strでキャッチしてしまう。
    catch (OverFlow){
        cout << 2 << endl;
        cout << "オーバーフローしました。プラグラムを終了します。" << endl;
        return 1;
    }

    catch (const char* str){
        cout << 1 << endl;
        cout << "例外発生：" << str;
    }

}