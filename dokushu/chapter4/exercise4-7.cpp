#include <iostream>

namespace module{
    void say(){
        std::cout << "名前空間：moduleの中にいます" << std::endl;
    }
}
// 
// void say(){
//     std::cout << "グローバル空間の中にいます。" << std::endl;
// }
// 
int main(){
    using namespace module;
    // module::say();
    say();
}