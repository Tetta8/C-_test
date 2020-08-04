#include <iostream>

template <typename T>
class Test{
    T value;
public:
    Test(T value):value(value){}
    T get_value();
    // 練習問題1
    // T get_value(){
    //     return value;
    // }
};

// 練習問題2
template <typename T>
T Test<T>::get_value(){
    return value;
}


int main(){
    Test<float> f_obj(10.01);
    Test<int> i_obj(10.01);

    std::cout << f_obj.get_value() << std::endl;
    std::cout << i_obj.get_value() << std::endl;

}