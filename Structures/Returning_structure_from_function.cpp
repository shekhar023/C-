//
//  Returning_structure_from_function.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 20/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
using namespace std;
struct Person{
    char name[20];
    int age;
    double salary;
};
Person getdata(Person);
void display(Person);

int main(){
    Person p;
    p=getdata(p);
    display(p);
    return 0;
}
Person getdata(Person p){
    cout<<"Enter Full Name:- ";
    cin>>p.name;
    cout<<"Enter Age:- ";
    cin>>p.age;
    cout<<"Enter Salary:- ";
    cin>>p.salary;
    return p;
}

void display(Person p){
    cout<<"\nName:- "<<p.name<<endl;
    cout<<"Age:- "<<p.age<<endl;
    cout<<"Salary:- "<<p.salary<<endl;
}
