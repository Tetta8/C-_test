#include <iostream>

template <typename P>
void filtered_show(int (&array)[5], P predicate){
    for(int e : array){
        if(predicate(e)){
            std::cout << e << std::endl;
        }
    }
}

class is_less_than_5{
public:
    bool operator()(int v) const{
        return v < 5;
    }
};

int main(){
    int array[] = {5, 10, 3, 0, 1};

    filtered_show(array, [](int v){return (v % 2) == 1;});

    std::cout << std::endl;

    filtered_show(array, is_less_than_5{});
}