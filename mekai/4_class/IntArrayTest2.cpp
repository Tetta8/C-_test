#include <new>
#include <iostream>
#include <stdlib.h>
#include "IntArray.h"

using namespace std;

void f(int size, int num){
    try{
        IntArray x(size);
        for(int i = 0; i < num; i++){
            x[i] = i;
            cout << "x[" << i << "]" << x[i] << endl;
        }
    }

    catch (const IntArray::IdxRngErr& x){
        cout << "添え字オーバーフロー：" << x.index() << endl;
    }

    catch(bad_alloc){
        cout << "メモリの確保に失敗しました。" << endl;
        exit(1);
    }
}

int main(){
    int size, num;

    cout << "要素数：";
    cin >> size;

    cout << "データ数：";
    cin >> num;

    f(size, num);

    cout << "main関数終了" << endl;

    return 0;
}