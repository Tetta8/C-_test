#ifndef ___Class__Date
#define ___Class__Date

#include <string>
#include <iostream>

class Date{
    int y;
    int m;
    int d;


    // プライベート関数を静的関数とする理由は？
    static int dmax[];
    static int days_of_year(int y);
    static int days_of_month(int y, int m);
    static int adjusted_month(int m);
    static int adjusted_day(int y, int m, int d);

public:
    Date();
    Date(int yy, int mm = 1, int dd = 1);

    // 閏年かどうか判定する。
    static bool leap_year(int year){
        return (year % 4 == 0) && (year % 100 != 0 ) || (year % 400 == 0);
    }

    // getter
    int year() const {return y;}
    int month() const {return m;}
    int day() const {return d;}

    // setter
    void set_year(int yy);
    void set_month(int mm);
    void set_day(int dd);
    void set(int yy, int mm, int dd);

    // 閏年判定
    bool leap_year() const {return leap_year(y);}

    // データ返却
    Date preceding_day() const;
    Date following_day() const;
    int day_of_year() const;
    int day_of_week() const;
    std::string to_string() const;

    // データ編集
    Date& operator++();
    Date  operator++(int);
    Date& operator--();
    Date  operator--(int);
    Date& operator+=(int n);
    Date& operator-=(int n);
    Date  operator+(int n) const;
    friend Date operator+(int n, const Date& date);
    Date  operator-(int n) const;
    long  operator-(const Date& day) const;
    bool  operator==(const Date& day) const;
    bool  operator!=(const Date& day) const;
    bool  operator> (const Date& day) const;
    bool  operator>=(const Date& day) const;
    bool  operator< (const Date& day) const;
    bool  operator<=(const Date& day) const;
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s,       Date& x);
#endif