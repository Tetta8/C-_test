#include <iostream>

void show_value(int a){
    std::cout << a << std::endl;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b){
    return sum(a, b, 0);
}

int sum(int a, int b, int c, int d){
    return sum(a, b) + sum(c, d);
}

struct vector2d{
    float x;
    float y;
};

int sub(int a, int b){
    return a - b;
}

vector2d sub(vector2d a, vector2d b){
    vector2d z;
    z.x = a.x - b.x;
    z.y = a.y - b.y;

    return z;
}

int main(){
    int x = sum(10, 20);
    show_value(x);

    int y = sum(5, 15, 25);
    show_value(y);

    int z = sum(2, 4, 6, 8);
    show_value(z);

    std::cout << sub(10, 20) << std::endl;

    vector2d a = {-10, 30};
    vector2d b = {5, 10};
    auto v = sub(a, b);
    std::cout << v.x << ", " << v.y << std::endl;
}