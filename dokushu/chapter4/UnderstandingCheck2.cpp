#ifndef ____UnderstandingCheck2
#define ____UnderstandingCheck2

#include <iostream>

class A{
public:
    int next(int a){return a + 1;}
    int back(int a);
};

inline int A::back(int a){
    return a - 1;
}

namespace ABC{
    namespace DEF{
        namespace GHI{
            void show(){
                std::cout << "名前空間重ねすぎ！！" << std::endl;
            }
        }
    }
}

int main(){
    A obj;

    std::cout << "5の次は\"" << obj.next(5) << "\"" << std::endl;
    std::cout << "5の前は\"" << obj.back(5) << "\"" << std::endl;

    namespace s = ABC::DEF::GHI;
    s::show();

    using namespace ABC::DEF::GHI;
    show();

    using ABC::DEF::GHI::show;
    show();
}

#endif