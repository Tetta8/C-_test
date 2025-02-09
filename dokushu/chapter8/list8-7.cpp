#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream out;

    out.open("hello_file.txt", std::ios::out | std::ios::trunc);

    out << "Hello, File IO" << std::endl;

    out.close();

    std::ifstream in("hello_file.txt", std::ios::in);

    std::string line;
    std::getline(in, line);

    std::cout << line << std::endl;

}