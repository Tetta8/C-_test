#include <iostream>

// 理解度チェック1
class vector3d{
public:
    using type3d = int;

    // 理解度チェック2
    type3d getter_x(){return x;}
    type3d getter_y(){return y;}
    type3d getter_z(){return z;}

    void setter_xyz(type3d x, type3d y, type3d z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

private:
    type3d x;
    type3d y;
    type3d z;
};

// 理解度チェック3
vector3d* set(vector3d::type3d x, vector3d::type3d y, vector3d::type3d z = 0){
    vector3d* v = new vector3d;
    v->setter_xyz(x, y, z);
    return v;
}

int main(){
    int x, y, z;
    std::cout << "\"x, y, z\"を入力してください(x y z)>" << std::endl;
    std::cin >> x >> y >> z;

    vector3d v;
    v.setter_xyz(x, y, z);
    std::cout << "メイン関数でセッターを使って作成：" << std::endl;
    std::cout << v.getter_x() << ", " << v.getter_y() << ", " << v.getter_z() << std::endl;
    std::cout << std::endl;

    vector3d* vecter1 = set(x, y, z);
    std::cout << "セット関数で3つの引数(x, y, z)を渡して作成：" << std::endl;
    std::cout << vecter1->getter_x() << ", " << vecter1->getter_y() << ", " << vecter1->getter_z() << std::endl;
    std::cout << std::endl;

    vector3d* vecter2 = set(x, y);
    std::cout << "セット関数で2つの引数(x, y)を渡して作成：" << std::endl;
    std::cout << vecter2->getter_x() << ", " << vecter2->getter_y() << ", " << vecter2->getter_z() << std::endl;
    std::cout << std::endl;

}