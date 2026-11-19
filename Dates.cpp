#include "Dates.h"

Dates::Dates(){
    day = 0;
    month = 0;
    year = 0;
}


bool Dates::set_Day(int a_day){
    if (a_day > 31){
        cout << "Please enter a valid date." << endl;
        return false;
    }   
    else{
    a_day = day;
    return true;
    }
}

bool Dates::set_Month(int a_month){
    if (a_month > 12){
        cout << "Please enter a valid month." << endl;
        return false;
    }   
    else{
    a_month = month;
    return true;
    }
}

void Dates::set_Year(int a_year){
    a_year = year;
}

bool Dates::set_DDay(int a_dday){
    if (a_dday > 31){
        cout << "Please enter a valid date." << endl;
        return false;
    }   
    else{
    a_dday = dday;
    return true;
    }
}

bool Dates::set_DMonth(int a_dmonth){
    if (a_dmonth > 12){
        cout << "Please enter a valid month." << endl;
        return false;
    }   
    else{
    a_dmonth = dmonth;
    return true;
    }
}

void Dates::set_DYear(int a_dyear){
    a_dyear = dyear;
}

int Dates::getDay(){
    return day;
}

int Dates::getMonth(){
    return month;
}

int Dates::getYear(){
    return year;
}

int Dates::getDDay(){
    return dday;
}

int Dates::getDMonth(){
    return dmonth;
}

int Dates::getDYear(){
    return dyear;
}


void Dates::print(){
    cout << "It is the " << day << "/" << month << "/" << year << "." << endl;
}

void Dates::printd(){

    cout << "It is due on the " << day << "/" << month << "/" << year << "." << endl;
}