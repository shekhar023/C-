//  Swapping_Using_Pointers.cpp
//  C++
//  Created by Shekhar Chaudhary on 24/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    int *pointer1,*pointer2;
    pointer1=&num1;
    pointer2=&num2;
    cout<<"Enter Two Numbers:";
    cin>>num1>>num2;
    cout<<"Number before Swapping: "<<*pointer1<<" and "<<*pointer2<<endl;
    *pointer1=*pointer1+*pointer2;
    *pointer2=*pointer1-*pointer2;
    *pointer1=*pointer1-*pointer2;
    cout<<"Number after Swapping: "<<*pointer1<<" and "<<*pointer2<<endl;
    
    
    
}
