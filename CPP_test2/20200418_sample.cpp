#include <stdio.h>
#include <iostream>  // standard stream
#include <string.h>

double argument_sample(int radius, double pi = 3.14);
void GetCircleArea(int radius, double pi);
void GetCircleArea(double radius, double pi);
void GetCircleArea(double radius);
inline int inline_sample(int a, int b);
inline int inline_sample2(int a, int b);

#define MAX(a,b) ((a)>(b) ? (a):(b))


/* inline func 
int main(){
    int a = 10;
    int b = 20;
    int value = inline_sample(a, b);

    std::cout << "inline value = " << value << std::endl;

    int x1 = 10, y1 = 15;
    int n1 = MAX(++x1, ++y1);
    std::cout << "x1 = " << x1 << " y1 = " << y1 << std::endl;
    
    int x2 = 10, y2 = 15;
    int n2 = inline_sample2(++x2 , ++y2 );
    std::cout << "x2 = " << x2 << " y2 = " << y2 << std::endl;

    return 0;

}

inline int inline_sample(int a, int b){
    return a + b;
}

inline int inline_sample2(int a, int b){
    if(a > b) {
        return a;
    }
    return b;
}
/* end */


/* name space 
namespace orange{
    int getPrice(){
        return 100;
    }
}

namespace apple{
    int getPrice(){
        return 150;
    }
}

int main(){
    int orange_value;
    int apple_value;

    orange_value = orange::getPrice();
    apple_value = apple::getPrice();

    std::cout << "orange value = " << orange_value << std::endl;
    std::cout << "apple valeu = " << apple_value << std::endl;
    return 0;
}
/* end */

/* scope 
char name[] = "grobale name!!";

class Shouhin{
public:
    Shouhin();
private:
    char name[100];
};

Shouhin::Shouhin(){
    char name[] = "local name!!!";
    strcpy(Shouhin::name , "menver name!!!!");
    std::cout << "name is " << name << std::endl;
    std::cout << "name is " << Shouhin::name << std::endl;
    std::cout << "name is " << ::name << std::endl;
}

int main(){
    Shouhin myShouhin;
    return 0;
}
/* end */

/* standard stream 
int main(){
    double pi = 3.14;
    std::cout << "Hello World!\nit is c++rangeage\n";
    std::cout << "pi = " << pi << "!\n";

    // cin.getlineと同時に使えない
    // int num;
    // std::cout << "input int style : ";
    // std::cin >> num;
    // std::cout << "input data = " << num << "!!\n";
    
    char name[100];
    std::cout << "input name : ";
    std::cin.getline(name, sizeof(name));
    std::cout << "your name is " << name << " !!\n";
    return 0;
}
/* end */

// over load topic デフォルト引数とオーバーロードを使い分けることで関数を少なくできる
/* over load one
int main(){
    int int_a = 10;
    double double_b = 20, double_c = 3.14;

    GetCircleArea(int_a, double_c);
    GetCircleArea(double_b, double_c);
    GetCircleArea(double_b);

    return 0;
}
/* end */

void GetCircleArea(int radius, double pi){
    printf("one\n");
}
void GetCircleArea(double radius, double pi){
    printf("two\n");
}
void GetCircleArea(double radius){
    printf("three\n");
}


/* defalut argument 
int main(){
    double val = argument_sample(1,1);
    //printf("not: %f\n", val);

    val = argument_sample(3);   // 第一引数から指定ができる
    printf("one :%f\n", val);

    val = argument_sample(2, 4);
    printf("two :%f\n", val);

}
/* end */

double argument_sample(int radius, double pi){
    double val = radius * pi;
    return val;
}

/* enum
int main(){
    enum class Colors {Red, Green, Blue, Yellow, White};
    enum class Colors2 {Red, Green = 10, Blue , Yellow = 20, White};
    Colors bookcolor;
    Colors2 bookcolor2;

    bookcolor = Colors::Green;
    bookcolor2 = Colors2::Green;

    printf("%d\n", bookcolor);
    printf("%d\n", bookcolor2);

    return 0;

}
/* end  */