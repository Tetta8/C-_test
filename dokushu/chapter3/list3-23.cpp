#include <iostream>

class S{
    static int count;
public:
    S();
    ~S();

    void show_count() const;
};

int S::count = 0;

S::S(){
    ++count;
}

S::~S(){
    --count;
}

void S::show_count() const{
    std::cout << "S::count:" << count << std::endl;

    // 有効範囲から外れるので、クラスが削除されるRAII
}

void function(){
    S a;
    a.show_count();
}

int main(){
    S a;
    a.show_count();
    function();
    a.show_count();
}