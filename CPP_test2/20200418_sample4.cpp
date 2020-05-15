#include <iostream>

using namespace std;

/* 構造体 */
struct Person{
    char name[50];
    int age;
};

/* プロトタイプ宣言 */
double Addnum(double &a, double &b);
void ChangeValue(double &a);
void ConstChangeValue(const double &a);
void PrintPersonRef(const Person &psn);
void PrintPersonPtr(const Person *psn);


/* reference value */
int main(){
    /* point1 
    int num = 2;
    cout << "num = " << num << endl;

    int &newnum = num;
    newnum = 13;
    
    cout << "newnum =  " << newnum << endl;
    cout << "num = " << num << endl;

    /* end point1 */

    /* point2 
    double num1 = 10.5, num2 = 20.4;
    double ans = Addnum(num1, num2);

    cout << "ans = " << ans << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    ChangeValue(num1);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    /* end point2 */

    /* point3 */
    Person shain1 = {"Shiori", 18};
    PrintPersonRef(shain1);
    PrintPersonPtr(&shain1);

    /* end point3 */
    return 0;

}
/* end */

double Addnum(double &a, double &b){
    return a + b;
}

void ChangeValue(double &a){
    a = 10.2;
}

void ConstChangeValue(const double &a){
    // a = 10.4; !!ERROR const not change
}

void PrintPersonRef(const Person &psn){
    cout << "Ms. " << psn.name << " :Age " << psn.age << endl;
}

void PrintPersonPtr(const Person *psn){
    cout << "Ms. " << psn->name << " :Age " << psn->age << endl;
}