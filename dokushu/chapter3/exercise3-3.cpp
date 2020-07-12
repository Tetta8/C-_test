#include <iostream>
#include <string>

class Book{
    std::string title;
    std::string writer;
    int price;

    void set_title(std::string title){
        this->title = title;
    }

    void set_writer(std::string writer){
        this->writer = writer;
    }

    
    void set_price(int price){
        this->price = price;
    }

public:
    Book(std::string title, std::string writer, int price): title(title), writer(writer), price(price){};

    Book(const Book& copy){
        set_title(copy.get_title());
        set_writer(copy.get_writer());
        set_price(copy.get_price());
    }

    std::string get_title() const{
        return title;
    }

    std::string get_writer() const{
        return writer;
    }

    int get_price() const{
        return price;
    }
    
    void Info() const{
        std::cout << "Tilte ：" << title << std::endl;
        std::cout << "Writer：" << writer << std::endl;
        std::cout << "Price ：" << price << std::endl;
    }
};

int main(){
    std::string str_title = "AtoB";
    std::string str_writer = "sasaki";
    
    Book A(str_title, str_writer, 1000);

    std::cout << "Book A Info" << std::endl;
    A.Info();

    std::cout << "Book A_copy Info" << std::endl;
    Book A_copy(A);
    A_copy.Info();
}