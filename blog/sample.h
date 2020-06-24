#include <iostream>

// 基底クラスsample
class Base{
private:
    int private_value1;
    int private_value2;
public:
    int public_value1;
    int public_value2;
    // コンストラクタ
    Base(void) : private_value1(0), private_value2(0), public_value1(0), public_value2(0) {}

    // 「計算する値をセットするメソッド」
    void set_value(int a, int b){
        private_value1 = a;
        public_value1  = a;
        private_value2 = b;
        public_value2  = b;
    }
    // 「計算結果を返すメソッド」
    int calcu(){return 0;}

    // 「計算式を表示するメソッド」
    void disp(){std::cout << "表示無し" << std::endl;}
};

class Add: public Base{
public:
    // コンストラクタ
    Add(void) : Base() {}

    // 「計算する値をセットするメソッド」
    // 基底クラスと同じなので変更無し

    // 「計算結果を返すメソッド」
    int calcu(){return public_value1 + public_value2;}

    // 「計算式を表示するメソッド」
    void disp(){
        std::cout << public_value1 << " + " << public_value2 << " = " << calcu() << std::endl;
    }

};