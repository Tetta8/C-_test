#include <iostream>
#include "Stack.h"
#include "ArrayStack.h"

using namespace std;

int main(){
    Stack<int>* s = new ArrayStack<int>();

    while(1){
        int menu;
        cout << "(1)プッシュ (2)ポップ (0)終了：";
        cin >> menu;
        if(menu == 0) break;

        switch(menu){
            int x;

            case 1: cout << "データ：";
                    cin >> x;
                    try{
                        s->push(x);
                    }
                    catch (const Stack<int>::Overflow&){
                        cout << "\aオーバフローしました。" << endl;
                    }
                    break;

            case 2: try{
                        x = s->pop();
                        cout << "ポップしたデータは" << x << "です。" << endl;
                    }
                    catch (const Stack<int>::Empty&){
                        cout << "\aスタックは空です。" << endl;
                    }
                    break;
        }
    }
    delete s;
}