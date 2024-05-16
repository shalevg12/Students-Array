//
// Created by macbook on 2019-05-26.
//

#ifndef AVODA_5_STUDENT_H
#define AVODA_5_STUDENT_H

#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string pName,lName;
    int ID,avgScore,amountScore=0;
   // int pScore[];
    Date bDate;
public:
    Student(string,string,int,int,int,int,int);
    bool operator>(const Student & s2);
    void operator<<(const Student);
    bool operator==(const Student & s2);


};


#endif //AVODA_5_STUDENT_H
