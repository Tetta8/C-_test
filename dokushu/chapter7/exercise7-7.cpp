#include <iostream>

class Base{
public:
    virtual void method1(){
        std::cout << "Base::method1()" << std::endl;
    }
    
    virtual void method2(){
        std::cout << "Base::method2()" << std::endl;
    }

    virtual void method3(){
        std::cout << "Base::method3()" << std::endl;
    }
};

class Derived : public Base{
public:
    void method1() final{
        std::cout << "Derived::method1()" << std::endl;
    }

    void method2() override{
        std::cout << "Derived::method2()" << std::endl;
    }

    // 仮想関数をオーバーライドしない
    // void method3() override{
    //    std::cout << "Derived::method3()" << std::endl;
    // }
};

class  MoreDerived final : public Derived{
public:
    // Derivedクラスでfinal指定しているのでオーバーライド禁止
    // void method1() override{
    //     std::cout << "MoreDerived::method1()" << std::endl;
    // }

    void method2() override{
        std::cout << "MoreDerived::method2()" << std::endl;
    }

    // 仮想関数をオーバーライドしない
    // void method3() override{
    //     std::cout << "MoreDerived::method3()" <<std::endl;
    // }
};

// MoreDerivedがfinal指定の為、派生クラスを作れない
// class MoreMoreDerived : public MoreDerived{
// public:
//     void method2() override{
//         std::cout << "MoreMoreDerived::metod1()" << std::endl;
//     }
// };


int main(){
    MoreDerived object;
    object.method1();
    object.method2();
    object.method3();
}