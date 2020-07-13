#include <iostream>
#include <string>

class Base{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0; 
};

std::string Base::name() const {return "Base";}

class Derived: public Base{
public:
    // std::string name() const override;
};

// std::string Derived::name() const {return "Derived";}

class MostDervied : public Derived{
public:
    // std::string name() const override;
    std::string most_name() const override;
};

// std::string MostDervied::name() const {return "MostDervide";}
std::string MostDervied::most_name() const {return "MostDervide!!";}

int main(){
    // Derived der1; // 基底クラスのmost_nameをオーバーライドしていないため、インスタンス化できない。
    // std::cout << der1.name() << std::endl;

    MostDervied m_der2;

    std::cout << m_der2.name() << std::endl;
    std::cout << m_der2.most_name() << std::endl;

}