#include <string>
#include <iostream>
#include "SimpleStack.h"

using namespace std;

int main(){
    string x;

    cout << "文字列：";
    cin >> x;

    SimpleStack<char> s(x.length());

    try{
        for(int i = 0; i < x.length(); i++){
            s.push(x[i]);
        }

        for(int i = 0; i < x.length(); i++){
            char c = s.pop();
            cout << c;
        }
        cout << endl;
    }

    catch (const SimpleStack<char>::Overflow&){
        cout << "\a満杯の<char>スタックにプッシュしようとしました。" << endl;
    }

    catch(const SimpleStack<char>::Empty&){
        cout << "\a空の<char>スタックからポップしようとしました。" << endl;
    }

    return 0;
}