#include <fstream>
#include <iostream>

int main(){
    std::ofstream out("hello_binary.bin", std::ios::binary);

    out.put(1);

    out.put(2).put(3);

    out.close();

    char a, b, c;
    std::ifstream in("hello_binary.bin", std::ios::binary);

    in.get(a);
    in.get(b).get(c);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
}