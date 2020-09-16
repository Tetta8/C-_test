#include <iostream>
#include <fstream>

int main(){
    std::ifstream in("in_file.txt");

    auto state = in.rdstate();

    std::cout << "init: " << state << std::endl;

    in.clear(std::ios::badbit | std::ios::failbit);

    state = in.rdstate();

    std::cout << "bad/faile: " << state << std::endl;

    in.clear();

    state = in.rdstate();

    std::cout << "clear: " << state << std::endl;
}