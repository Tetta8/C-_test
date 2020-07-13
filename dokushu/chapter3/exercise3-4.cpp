#include <iostream>

class vector3d{
    float x = 1;
    float y = 1;
    float z = 1;

public:
    vector3d();

    void show(){
        std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
    }
};

vector3d::vector3d(){}

int main(){
    vector3d v1;

    v1.show();
}