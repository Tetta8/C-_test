#include <iostream>

using namespace std;

class MikanBox{
public:
    MikanBox(){
        total = 0;
    }
    MikanBox(int a){
        total = a;
    }

    int GetTotal(){
        return total;
    }

    ~MikanBox(){
    }
private:
    int total;
};

int main(){
    MikanBox *MikanBox_1 = new MikanBox();
    MikanBox *MikanBox_2 = new MikanBox(10);

    int box_1 = MikanBox_1->GetTotal();
    int box_2 = MikanBox_2->GetTotal();

    cout << "MikanBox_1 total = " << box_1 << endl;
    cout << "MikanBox_2 total = " << box_2 << endl;

    return 0;

}

/* new delete sample 
class MikanBox{
public:
    MikanBox(){
        cout << "make MikanBox now!" << endl;
    }
    ~MikanBox(){
        cout << "delete MikanBox now!" << endl;
    }
};

int main(){
    MikanBox *pMikanbox = new MikanBox;
    delete pMikanbox;

    int *pNum = new int;
    *pNum = 109;
    cout << "pNum = " << *pNum << endl;
    delete pNum;

    cout << "pNum = " << *pNum << endl;
    return 0;
}
/* end */