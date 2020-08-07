#include <iostream>

struct S_sharde{
public:
    static int value;
};

int S_sharde::value = 0;

template <typename T>
class S: public S_sharde{
};

int main(){
    std::cout << "S<int>::value: " << S<int>::value << std::endl;
    std::cout << "S<float>::value: " << S<float>::value << std::endl;

    std::cout << "&S<int>::value: " << &S<int>::value << std::endl;
    std::cout << "&S<int>::value: " << &S<float>::value << std::endl;

    S<int>::value = 42;

    std::cout << "S<int>::value: " << S<int>::value << std::endl;
    std::cout << "S<flaot>::vlaue: " << S<float>::value << std::endl;
}