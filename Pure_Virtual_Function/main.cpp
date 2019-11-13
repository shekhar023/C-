//
//  main.cpp
//  Pure_Virtual_Function
//
//  Created by Shekhar Chaudhary on 30/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>

using namespace std;

class Balaguruswamy{
public:
    virtual void example()=0; //denotes pure virtual function definition
    
};

class C:public Balaguruswamy{
public:
    void example(){
        cout<<"C++ textbook written by Balaguruswamy "<<endl;
    }
};

class oops:public Balaguruswamy{
public:
    void example(){
        cout<<"E Balaguruswamy written C++"<<endl;
    }
};

int main(){
    Balaguruswamy* arr[2];
    C e1;
    oops e2;
    arr[0]=&e1;
    arr[1]=&e2;
    
    arr[0]->example();
    arr[1]->example();
}
