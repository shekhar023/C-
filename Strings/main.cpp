//
//  main.cpp
//  Strings
//
//  Created by Shekhar Chaudhary on 11/10/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    //creating string object
    string s1;
    string s2(" New");
    string s3(" Delhi");
    
    //assigning value to string objects
    s1=s2;
    cout<<"S1 = "<<s1<<endl;
    
    //using a string constant
    s1="Standard C++";
    cout<<"Now S1 = "<<s1<<endl;
    
    //using another object
    string s4(s1);
    cout<<"S4 = "<<s4<<endl;
    
    //Reading through keyboard
    cout<<"Enter a String: \n";
    cin>>s4;
    cout<<"Now S4 = "<<s4<<endl;
    
    //concatenating strings
    s1=s2+s3;
    cout<<"S1 finally contains: "<<s1<<endl;
    
    return 0;
}
