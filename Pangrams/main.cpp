//
//  main.cpp
//  Pangrams
//
//  Created by Shekhar Chaudhary on 07/05/19.
//  Copyright © 2019 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
string pangrams(string str) {
    
    string Small_Alpha = "abcdefghijklmnopqrstuvwxyz";
    string Cap_Alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    int count =0;
    bool res = false;
    for(int i = 0 ; i<str.length() ; i++){
        
        if(count < Small_Alpha.length() && count < Cap_Alpha.length() && count < str.length()){
            
            if(Small_Alpha.find(str[i]) != string::npos || Cap_Alpha.find(str[i]) != string::npos){
                count++;
                res = true;
            }
            else
                res = false;
        }
    }
    if(!res)
        return "panagram";
    else
        return "not panagram";
}

int main()
{
    string *str = new string;
    getline(cin,*str);
    
    cout<<pangrams(*str)<<endl;
    
    return 0;
    
}
