#include <iostream>
#include <string>
#include <utility>

class person{
    std::string m_name;
    int m_age;
    person(int age) : m_age{age}{}
public:
    person() : person{-1}{};
    person(std::string name, int age): m_name{name}, m_age{age}{}

    person(person&& ohter);

    const std::string& name() const{return m_name;}
    int age() const{return m_age;}
};

// ムーブコンストラクタ
person::person(person&& other) : m_name{other.m_name}, m_age{other.m_age}{
    std::cout << "ムーブコンストラクタで初期化" << std::endl;
}

int main(){
    person alice{"alice", 15};

    person move{std::move(alice)};

    std::cout << move.name() << std::endl;
    std::cout << move.age() << std::endl;
    std::cout << alice.name() << std::endl;
    std::cout << alice.age() << std::endl;
}