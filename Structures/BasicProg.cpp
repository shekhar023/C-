//
//  BasicProg.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 20/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
#include<cstring>
using namespace std;
struct Person{
    string name[10];
    int age[10];
    float salary[10];
    int entries;
};
int main(){
    Person p;
    int i=0,num;
    cout<<"Enter Number of Entries:- ";
    cin>>p.entries;
    num=p.entries;
    while(num>0){
        cout<<"Enter Name:- ";
        cin>>p.name[i];
        cout<<"Enter Age:- ";
        cin>>p.age[i];
        cout<<"Enter Salary:- ";
        cin>>p.salary[i];
        i++;
        num--;
    }
    cout<<"\nEntries are:-\n";
    for(i=0;i<p.entries;i++)
    {
        cout<<"Name:-"<<p.name[i]<<endl;
        cout<<"Age:-"<<p.age[i]<<endl;
        cout<<"Salary:-"<<p.salary[i]<<endl<<endl;
    }
    
}

