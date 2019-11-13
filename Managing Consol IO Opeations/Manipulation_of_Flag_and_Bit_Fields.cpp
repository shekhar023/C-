//
//  Manipulation_of_Flag_and_Bit_Fields.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 25/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int  num;
    cout<<"Enter Integer Value: ";
    cin>>num;
    
    cout<<"The Hexadecimal, Octal and Decimal representation of "<<num<<" is : ";
    
    cout.setf(ios::hex,ios::basefield);
    cout<<num<<", ";
    
    cout.setf(ios::oct,ios::basefield);
    cout<<num<<" and ";
    
    cout.setf(ios::dec,ios::basefield);
    cout<<num<<" respectively"<<endl;
    
    return 0;
    
}
