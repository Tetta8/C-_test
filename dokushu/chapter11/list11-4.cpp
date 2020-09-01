#include <iostream>

int main(){
    const char* message = "Hello, C-style cast";

    void* ptr = (void*)message;

    std::cout << (char*)ptr << std::endl;
}