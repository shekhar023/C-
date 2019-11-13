//
//  main.cpp
//  CamelCase
//
//  Created by Shekhar Chaudhary on 28/10/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    string str=*new string;
    int count=1,i;
    cin>>str;
    int len=(int)str.size();
    for(i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z')
            count++;
    }
    
    cout<<count<<endl;
    
    return 0;
}
