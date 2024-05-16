//
// Created by macbook on 2019-05-26.
//

#ifndef AVODA_5_MYARR_H
#define AVODA_5_MYARR_H

#include "Student.h"
template <class T>
class MyArr {
private:
    Student *pStudent;
    int index=0;
    int Avarage;
    Student **arr=new Student*[index];


public:
    MyArr();
    T sDetail(T x);
    void isType();
    void operator[](const int i);
    void operator+=(const T finall);
    void operator<<(const MyArr & S);
    bool is_sorted();
    int findMax();
    int findMin();
    void operator-=(const T);

};



#endif //AVODA_5_MYARR_H
