#include <iostream>

class S{
public:
	static int num; // 宣言
};

int S::num = 124;	// 定義 定義時に初期化する

int main(){
	std::cout << S::num << std::endl;

	S::num = 456;

	std::cout << S::num << std::endl;

	S a;

	a.num = 789;

	std::cout << S::num << std::endl;
}