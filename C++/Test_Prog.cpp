//
//  Test_Prog.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 17/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

auto sum(){
    auto num1=0.0;
    auto num2=0.0;
    auto sum=0.0;
    
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    sum=num1+num2;
    cout<<"The Sum is: "<<sum<<endl;
    
}
int main(){
    
    sum();
    return 0;
}
