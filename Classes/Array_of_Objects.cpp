//  Array_of_Objects.cpp
//  C++
//  Created by Shekhar Chaudhary on 21/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.

#include<iostream>
using namespace std;
class employee{
    char name[30];
    float age;
public:
    void getdata();
    void putdata();
};
void employee::getdata(){

    cout<<"Enter Name:- ";
    cin>>name;
    cout<<"Enter Age:- ";
    cin>>age;
}
void employee::putdata(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
const int size=3;
int main(){
    employee manager[size];
    
    for(int i=0;i<size;i++){
        cout<<"\nDetails of Manager "<<i+1<<endl;
        manager[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"\nManager "<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;
}

