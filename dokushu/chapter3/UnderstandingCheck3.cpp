#include <iostream>

class Add{
public:
    int result(int a, int b){ return a + b;}
};

class Add2:public Add{
public:
    using Add::result;
    int result(int a, int b, int c){return a + b + c;}
};

int main(){
    Add2 cal;

    std::cout << cal.result(1, 2) << std::endl;
    std::cout << cal.result(1, 2, 3) << std::endl;
}
