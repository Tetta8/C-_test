#include <iostream>

class longname{
public:
    using integer = int;
    integer a = 100;

    integer get_b(){return b;}
    void set_b(integer value){b = value;};

private:
    integer b = 0;
};

int main(){
    using sname = longname;
    sname name;

    std::cout << name.a << std::endl;;

    std::cout << name.get_b() << std::endl;

    sname::integer value = 50;
    name.set_b(value);
    std::cout << name.get_b() << std::endl;
}