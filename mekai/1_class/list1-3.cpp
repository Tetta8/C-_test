#include<string>
#include<iostream>

using namespace std;

class Accounting{
private:
    string full_name;
    long crnt_asset;
public:
    // コンストラクタ
    Accounting(string name, long asset){
        full_name = name;
        crnt_asset = asset;
    }

    string name(){
        return full_name;
    }

    long asset(){
        return crnt_asset;
    }

    void earn(long yen){
        crnt_asset += yen;
    }

    void spend(long yen){
        crnt_asset -= yen;
    }
};

int main(){
    Accounting nakano("中野隼人", 1000);
    Accounting yamada("山田宏文", 200);

    nakano.spend(200);
    yamada.earn(100);
    
    cout << "■中野：\"" << nakano.name() << "\" " << nakano.asset() << "円" << endl;
    cout << "■山田：\"" << yamada.name() << "\" " << yamada.asset() << "円" << endl;

    return 0;
}