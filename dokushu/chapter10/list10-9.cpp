#include <iostream>

class A{
public:
    A(){
        throw 0;
    }
};

int main(){
    try{
        A* ptr = new A;

        delete ptr;
    }
    catch(int e){
        std::cout << "例外が投げられました 値 = " << e << std::endl;
    }
}