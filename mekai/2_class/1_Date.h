// 日付クラスDate

class Date{
    int y;
    int m;
    int d;

public:
    Date();
    Date(int yy, int mm = 1, int dd = 1);
    int year() {return y;}
    int month() {return m;}
    int day() {return d;}
};