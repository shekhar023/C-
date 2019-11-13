//
//  Accessing&ManipulatingCharacters.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 30/10/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    string str=("ONE TWO THREE FOUR");
    
    for(int i=0;i<str.length();i++){
        cout<<str.at(i); //display one character
    }
    for(int j=0;j<str.length();j++){
        cout<<str[j];
    }
     int x1 = (int)str.find("TWO");
    cout<<"\n\n TWO is found at: "<<x1<<endl;
    
    int x2 = (int)str.find_first_of('T');
    cout<<"\nT is found first at: "<<x2<<endl;
    
    int x3 = (int)str.find_last_of('R');
    cout<<"\nRis last found at: "<<x3<<endl;
    
    cout<<"\nRetrieve and print substring TWO"<<endl;
    
    cout<<str.substr(x1,3)<<endl;
    
    return 0;
}
