#include <iostream>

void show_message(int value){
    if(10 >= value || value >= 20){
        std::cout << "10以上20未満ではありません。" << std::endl;
    }else{
        std::cout << "10以上20未満です。" << std::endl;
    }
}

int main(){
    // 練習問題1
    show_message(9);
    show_message(15);
    show_message(20);

    // 練習問題2
    int a = 1;
    switch(a + 1){
        case 1:
            std::cout << "a + 1は1です。" << std::endl;
            break;
        case 2:
            std::cout << "a + 1は2です。" << std::endl;
            break;
        case 3:
            std::cout << "a + 1は3です。" << std::endl;
            break;
        default:
            ;
    }

    // 練習問題3
    a = 0;
    if((a + 1) == 1){
        std::cout << "a + 1は1です。" << std::endl;
    }else if((a + 1) == 2){
        std::cout << "a + 1は2です。" << std::endl;
    }else if((a + 1) == 3){
        std::cout << "a + 1は3です。" << std::endl;
    }else{
        std::cout << "a + 1は1でも2でも3でもありません。" << std::endl;
    }
}