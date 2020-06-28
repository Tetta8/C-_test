#include <new>
#include <iostream>
#include "Array.h"

using namespace std;

int main(){
    try {
        int no;
        Array<int> x(5);
        Array<double> y(8);

        cout << "データ数：";
        cin >> no;

        for(int i = 0; i < no; i++){
            x[i] = i;
            y[i] = 0.1 * i;
            cout << "x[" << i << "] = " << x[i] << " "
                 << "y[" << i << "] = " << y[i] << endl;
        }
    }

    catch (const bad_alloc&){
        cout << "記憶域の確保に失敗しました。" << endl;
        return 1;
    }

    catch (const Array<int>::IdxRngErr& x){
        cout << "添字オーバーフロー Array<int>：" << x.Index() << endl;
        return 1;
    }

    catch (const Array<double>::IdxRngErr& x){
        cout << "添付オーバーフロー Array<double>：" << x.Index() << endl;
        return 1;
    }

    return 0;
}