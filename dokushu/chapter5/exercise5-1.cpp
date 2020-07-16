#include <iostream>

// 練習問題5-1
void reverse(int array[], int n){
    int temp_array[n];

    // temp_arrayに一時格納
    for(int i = 0; i < n ; i++){
        temp_array[i] = array[i];
    }

    int m = n - 1;
    // arrayを逆順に修正
    for(int i = 0; i < n ; i++){
        array[m] = temp_array[i];
        --m;
    }

}

int main(){
    int array[] = {0, 1, 2, 3, 4};

    reverse(array, 5);

    std::cout << "練習問題1" << std::endl;
    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;

    // 練習問題5-2
    int* ptr = array;

    std::cout << "練習問題2" << std::endl;
    std::cout << *ptr++ << std::endl;
    std::cout << *ptr++ << std::endl;
    std::cout << *ptr++ << std::endl;
    std::cout << *ptr++ << std::endl;
    std::cout << *ptr << std::endl;
}