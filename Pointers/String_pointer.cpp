//
//  String_pointer.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 26/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>

using namespace std;

int main(){

    char str[]="\nC++ is better than C";
    double  len=strlen(str);
    char *substr=new char[len];
    cout<<"The main string is: "<<str;
    cout<<"\nEnter the substring to be searched: ";
    cin>>substr; 
    
}
