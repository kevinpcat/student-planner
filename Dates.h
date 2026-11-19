#include <iostream>
using namespace std;

class Dates
{
    private:
        int day, month, year;
        int dday,dmonth,dyear;

    public:
        
        Dates();
        void print();
        void printd();
        
        // Setters
        bool set_Day(int a_day){a_day = day;}
        bool set_Month(int a_month){a_month = month;}
        void set_Year(int a_year){a_year = year;}
        bool set_DDay(int a_dday){a_dday = dday;}
        bool set_DMonth(int a_dmonth){a_dmonth = dmonth;}
        void set_DYear(int a_dyear){a_dyear = dyear;}

        // Getters
        int getDay();
        int getMonth();
        int getYear();
        int getDDay();
        int getDMonth();
        int getDYear();
        
};