#include <iostream>
#include <cstring>

using namespace std;


/* copy constructor 

class Person{
public:
    Person();
    Person(const Person &psn);
    ~Person(){
        delete [] name;
    }
    void SetName(char *name){
        this->name = name;
    }
    void OutName(){
        cout << "My name is " << name << endl;
    }

private:
    char *name;
};

Person::Person(){

}

Person::Person(const Person &psn){
    name = new char[strlen(psn.name) + 1];
    strcpy(name, psn.name);
}

int main(){
    Person *person_1 = new Person;

    person_1->SetName("Tatsuya");
    person_1->OutName();

    Person *person_1_1 = new Person(*person_1);

    person_1_1->OutName();

    delete person_1;

    person_1_1->OutName();

    delete person_1_1;


    return 0;

}

/* end */