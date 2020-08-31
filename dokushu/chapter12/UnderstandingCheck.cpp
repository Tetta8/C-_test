#include <iostream>
#include <vector>
#include <tuple>
#include <set>

int main()
{
    std::cout << "理解度チェック1：前のイテレータを取得できないイテレータの種類" << std::endl;
    std::cout << "イテレータの種類" << std::endl;
    std::cout << "OK：入力イテレータ" << std::endl;
    std::cout << "OK：出力イテレータ" << std::endl;
    std::cout << "OK：順方向イテレータ" << std::endl;
    std::cout << "NG：双方向イテレータ(デクリメント可能)" << std::endl;
    std::cout << "NG：ランダムアクセスイテレータ(どの位置にもアクセス可能)" << std::endl;
    std::cout << std::endl;

    std::cout << "理解度チェック2" << std::endl;
    std::vector<int> v = {4, 6, 2, 1, 7, 5, 2, 6};
    auto iter = v.begin() + 3;
    v.erase(iter);
    for (auto e : v)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "理解度チェック3" << std::endl;
    std::tuple<int, float, std::string> t = {2, 3.14f, "2個の円があります。"};
    std::cout << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << std::endl;
    auto [x, y, z] = t;

    std::cout << x << ", " << y << ", " << z << std::endl;
    std::cout << std::endl;

    std::cout << "理解度チェック4" << std::endl;
    std::cout << "setとmultisetの違いは同じ要素を含むことができるかである。" << std::endl;
    std::set<int> is = {1, 2, 1, 2, 3, 1, 2, 3, 4};
    for (auto iter = is.begin(); iter != is.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
    std::cout << std::endl;

    std::multiset<int> mis = {1, 2, 1, 2, 3, 1, 2, 3, 4};
    for (auto iter = mis.begin(); iter != mis.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
    std::cout << std::endl;

    std::cout << "理解度チェック5" << std::endl;
    std::vector<int> v1 = {1, 2, 1, 2, 3, 1, 2, 3, 4, 1, 1, 1, 1, 2, 3, 4, 5, 1};
    for(auto iter = v1.begin(); iter != v1.end(); ++iter){
        std::cout << *iter << std::endl;
    }

    auto iter1 = v1.begin();
    int count = 0;
    for(auto iter = v1.begin() + 1; iter != v1.end(); ++iter){
        if(*iter1 == *iter){
            count++;
        }
    }

    std::cout << "先頭の要素：" << *iter1 << "は、" << count << "個あります。" << std::endl;
}