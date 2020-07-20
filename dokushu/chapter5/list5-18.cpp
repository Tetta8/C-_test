#include <iostream>
#include <string>

class Object{
    std::string name;
public:
    Object(std::string name);
    const std::string& get_name() const;
};

Object::Object(std::string name) : name{name}{}

const std::string& Object::get_name() const{
    return name;
}

int main(){
    Object obj{"とても大きなオブジェクト"};

    const std::string& name = obj.get_name();
    std::cout << name << std::endl;
}