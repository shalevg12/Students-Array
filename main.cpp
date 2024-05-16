#include <iostream>
#include "MyArr.h"
#include <fstream>
#include <cstdlib>
#include <string>
#include <set>
using namespace std;


int main() {
    MyArr<float> float1();
    Student *arr=new Student("shalev","gabay",207949140,100,10,8,1995);

    cout<<arr->;
 //   MyArr<float> float2();


/*
    ifstream MyArr1;
    ifstream MyArr2;

    MyArr1.open("arrfloat1.txt");
    if(!MyArr1.is_open()){
        cout<<"Error Not Open!";
        exit(1);
    }

    for(int i=0;i<4;i++){
        MyArr1>>float1[i];
    }
*/
    cout<<float1;
    /*
    MyArr<int> Arr(2);


    ifstream MyArr1;
    MyArr1.open("arrstud1.txt");

    //check for Errors
    if(!MyArr1.is_open()){
        cout<<"Error no open files"<<endl;
        exit(1);
    }


    string mishpat;
    set <string> mishpats;

    while (!MyArr1.eof()){
        getline(MyArr1,mishpat);
    }

    cout<<"The Sentences: "<<mishpat<<endl;
//    string Array[8];


   // MyArr1 >> mishpat;

    for(int i=0;i<8;i++){
        MyArr1 >> Array[i];
    }

    for(int i=0;i<8;i++)
        cout<<Array[i]<<endl;

  //  cout<<"The Sentence: "<<mishpat<<endl;

*/
}