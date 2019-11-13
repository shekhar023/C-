//  Problem5.cpp
//  C++
//  Created by Shekhar Chaudhary on 21/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
using namespace std;
class DB;
class DM{
    float meters;
    float centimeters;
public:
    void readdata();
    friend void add(DM,DB);
};
class DB{
    float feet;
    float inches;
public:
    void readdata();
    friend void add(DM,DB);
};
void DM::readdata(){
    cout<<"Enter Distance in METERS:- ";
    cin>>meters;
    cout<<"Enter Distance in CENTIMETERS:-";
    cin>>centimeters;
}

void DB::readdata(){
    cout<<"Enter Distance in FEET:- ";
    cin>>feet;
    cout<<"Enter Distance in INCHES-";
    cin>>inches;
}
void add(DM obj1,DB obj2){
    obj1.meters=0.3408*obj2.feet;
    obj1.centimeters=2.54*obj2.inches;
    cout<<"The Sum is: "<<obj2.feet+obj1.meters<<" feet "
    <<obj2.inches+obj1.centimeters<<" inches"<<endl;
}
int main(){
    DB db;
    DM dm;
    db.readdata();
    dm.readdata();
    add(dm, db);
    return 0;
}


