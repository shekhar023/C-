//
//  main.cpp
//  Classes
//
//  Created by Shekhar Chaudhary on 19/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>

using namespace std;

class employee{
    char name[10];
    float age;
    int i,j;
public:
    void getdata();
    void putdata();
};
void employee::getdata(){
    cout<<"Enter Name";
    cin>>name;
    cout<<"Enter Age";
    cin>>age;
}
void employee::putdata(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
const int size=3;
int main(){
    employee manager[size];
    for(int i=0;i<size;i++){
        cout<<"\nDetails of manager"<<i+1<<endl;
        manager[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"\nManager"<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;
}
