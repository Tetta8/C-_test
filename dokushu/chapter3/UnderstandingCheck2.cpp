#include <iostream>

class vector3d{
    float x = 0;
    float y = 0;
    float z = 0;
public:
    vector3d();
    vector3d(float x, float y);
    vector3d(float x, float y, float z);

    void show(){
        std::cout << x << ", " << y << ", " << z << std::endl;
    }
};

vector3d::vector3d(){}
vector3d::vector3d(float x, float y):x(x), y(y){}
vector3d::vector3d(float x, float y, float z):x(x), y(y), z(z){}

int main(){
    vector3d no1;
    vector3d no2(1, 2);
    vector3d no3(5, 6);

    no1.show();
    no2.show();
    no3.show();
}