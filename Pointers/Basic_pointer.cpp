//  Basic_pointer.cpp
//  C++
//  Created by Shekhar Chaudhary on 24/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>

using namespace std;

int main(){
    int number=10;
    int *pointer;
    pointer=&number;//now "pointer contains the address of "number"
    cout<<"Address of number variable is:"<<&number<<endl;
    cout<<"Value of number variable is:"<<number<<endl;
    cout<<"Address of pointer variable is:"<<pointer<<endl;
    cout<<"Value of pointer variable is:"<<*pointer<<endl;
    return 0;
}
