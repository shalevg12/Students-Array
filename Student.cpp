//
// Created by macbook on 2019-05-26.
//

#include "Student.h"

Student::Student(string firstname, string lastname, int id, int score, int day, int month, int year) {

    pName=firstname;
    lName=lastname;
    ID=id;
  //  pScore[amountScore]=score;
    amountScore++;


    bDate.SetDay(day);
    bDate.SetMonth(month);
    bDate.SetYear(year);


    try {
        if (ID < 100000000 || ID > 999999999) {
            throw ID;
        }
    }

    catch(int ID){
        cout<<"Error! ID must be 9 Digits!!"<<endl;
        cin>>ID;
    }

    try{
        if(bDate.GetDay()<1||bDate.GetDay()>31){
            cout<<"Error! Day Must be between 1 to 31!";
            throw day;
        }
    }
    catch(int day){
        cin>>day;
        bDate.SetDay(day);
    }


    try {
        if (bDate.GetMonth() < 1 || bDate.GetMonth() > 12) {
            throw month;
        }
    }
    catch(int month){
        cout<<"Error!! Month Must be bwtween 1 to 12!"<<endl;
        cin>>month;
        bDate.SetMonth(month);
    }

    try {
        if (bDate.GetYear() < 1000 || bDate.GetYear() > 9999) {
            throw year;
        }
    }
    catch(int year){
        cout<<"Error!! Year Must be bwtween 1 to 12!"<<endl;
        cin>>year;
        bDate.SetYear(year);
    }

    if(score<0||score>100){
        throw score;
    }





}

bool Student::operator>(const Student &s2) {
    if(this->avgScore>s2.avgScore)
        return true;
    return false;
}

void Student::operator<<(const Student) {
    cout<<"Details for Student:"<<endl;
    cout<<"First Name: "<<pName<<endl;
    cout<<"Last Name: "<<lName<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"BDate: "<<bDate.GetDay()<<"."<<bDate.GetMonth()<<"."<<bDate.GetYear()<<endl<<endl;
    cout<<"School Details:"<<endl;
    cout<<"Amount of Scores: "<<amountScore<<endl;
    cout<<"Avarage Score: "<<avgScore<<endl;

}

bool Student::operator==(const Student &s2) {
    if(ID==s2.ID)
        return false;
    return true;
}

