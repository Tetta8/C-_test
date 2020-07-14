#include <iostream>

class A{
    int x;
    int y;
    int result;
public:
    A(int x, int y):x(x), y(y){}

    void set_value1(int x, int y){
        this->x = x;
        this->y = y;
    }

    void set_value2(int x, int y){
        x = x;
        y = y;
    }

    void sum(){
        result = x + y;
    }

    int get_result(){
        return result;
    }
};

int main(){
    A cal(1, 3);

    cal.sum();
    std::cout << "コンストラクタ実行後：" << cal.get_result() << std::endl;

    cal.set_value1(5 , 8);
    cal.sum();
    std::cout << "this有りセッターの場合：" << cal.get_result() << std::endl;

    cal.set_value2(4 , 2);
    cal.sum();
    std::cout << "this無しセッターの場合：" << cal.get_result() << std::endl;
}