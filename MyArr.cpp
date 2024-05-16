//
// Created by macbook on 2019-05-26.
//

#include "MyArr.h"

template<class T>
void MyArr<T>::operator[](const int i) {
    try{
        if(index<i)
            throw i;
    }
    catch(int i){
        cout << "Enter New Index!" << endl;
        cin >> i;
        return arr[i];
    }
}

template<class T>
void MyArr<T>::operator+=(const T finall) {
    T temp[index+1];
    if(index!=0) {
        for (int i = 0; i < index; i++)
            temp[i] = arr[i];
    }
    temp[index+1]=finall;
    index++;
    delete[] arr;
    Student **arr;
    arr=new Student*[index];

    for(int i=0;i<index;i++){
        arr[i]=temp[i];
    }
}

template<class T>
void MyArr<T>::isType() {
    cout<<"The Type name is:"<<typeid(T).name();
}

template<class T>
void MyArr<T>::operator<<(const MyArr & S) {
    cout<<"The Type is: "<<typeid(MyArr).name()<<endl;
    cout<<"The Size is: "<<index<<endl;

    for(int i=0;i<index;i++){
        arr[i]->operator<<();
        cout<<"\n******\n";
    }
}

template<class T>
bool MyArr<T>::is_sorted() {
    if(index==0|index==1)
        return true;
    for(int i=0;i<index-1;i++)
        if(arr[i]>arr[i+1])
            return false;
        return true;
}

template<class T>
int MyArr<T>::findMax() {
    T *Max;
    Max=arr[0];
    if(index==0)
        return NULL;
    for(int i=0;i<index;i++){
        if(Max<arr[i]) {
            Max = arr[i];
            *Max = arr[i];
        }
    }
    return *Max;
}

template<class T>
int MyArr<T>::findMin() {
    T *Min;
    Min=arr[0];
    if(index==0)
        return NULL;
    for(int i=0;i<index;i++){
        if(Min<arr[i]) {
            Min = arr[i];
            *Min=arr[i];
        }
    }
    return *Min;
}

template<class T>
void MyArr<T>::operator-=(const T Check) {
    int temp=-1;

    int j=0;
    try {
        for (int i = 0; i < index; i++) {
            if (Check == arr[i])
                temp = i;
        }
        if(temp==-1){
            throw Check;
        }
    }
    catch(int x){
        cout<<"Not Exist!!";
        exit(0);
    }
    int Temparr[index-1];
    for(int i=0;i<index;i++){
        if(temp==i)
            i++;
        Temparr[j]=arr[i];
        j++;

    }
    for(int i=0;i<index-1;i++){
        arr[i]=Temparr[i];
    }
    arr[index]=NULL;
}



template<class T>
T MyArr<T>::sDetail(T x) {
    return x;
}

template<class T>
MyArr<T>::MyArr() {
}

