//
//  main.cpp
//  Mars Exploration
//
//  Created by Shekhar Chaudhary on 05/05/19.
//  Copyright © 2019 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
#include<cstring>

using namespace std;

void Mars_Exploration(string str){
    
    int count = 0;
    auto sos ="SOS";
    
    for(int i = 0 ; i < str.length() ; i++)
        count += (str[i] != sos[i%3]);
    
    cout<<count<<endl;
}


int main(){
    
    string str;
    cin>>str;
    Mars_Exploration(str);
}
