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