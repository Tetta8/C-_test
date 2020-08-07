class Base{
protected:
    struct{
        vfunc-pointer foo_vfunc;
    } vtable;

public:
    void foo_body(){}

    void foo(){
        vtable.foo_vfunc();
    }

    Base(){
        vtabel.foo_vfunc = &foo_body;
    }
};

class Derived : public Bass{
public:
    void foo_body(){}

    Derived(){
        vtabel.foo_vfunc = & foo_body;
    }
};

int main(){
    Derived d;
    d.foo_body();
}