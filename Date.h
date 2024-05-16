#ifndef _DATE_H
#define _DATE_H
using namespace std;

#include <time.h>
#include <iostream>

class Date {
private:
    int day, month, year;
public:
    Date();
    Date(int, int, int);
    void SetDay(int);
    void SetMonth(int);
    void SetYear(int);
    int GetDay();
    int GetMonth();
    int GetYear();
    void PrintDate();
    void PrintMonthName();
    int MonthDaysNum();
    bool Meuberet();
    void NextDayDate();
};
#endif
