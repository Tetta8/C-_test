#include <iostream>
#include <exception>

using namespace std;

void func() throw(int){
    throw 3.14;
}

void my_handler(){
    cout << "例外指定されていない例外が送出されました。" << endl;
}

int main(){
    try{
        throw bad_exception();
    }
    catch (const bad_exception& e){
        cout << "bad_exceptironを補足：エラー内容は" << e.what() << endl;
    }

    set_unexpected(my_handler);
    
    func();
}