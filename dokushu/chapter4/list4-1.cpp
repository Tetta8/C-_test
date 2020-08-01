#include <iostream>

int main(){
    std::cout << "__FILE__:" << __FILE__ << std::endl;
    std::cout << "__LINE__:" << __LINE__ << std::endl;
    std::cout << "__func__:" << __func__ << std::endl;

    std::cout << "__cplusplus__" << __cplusplus << std::endl;

    int line = __LINE__;

    std::cout << "line:" << line << ", __LINE__:" << __LINE__ << std::endl;
}