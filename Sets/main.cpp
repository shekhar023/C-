//
//  main.cpp
//  Sets
//
//  Created by Shekhar Chaudhary on 27/03/19.
//  Copyright © 2019 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <set>
#include<cstring>

using namespace std;


int main(){
    
    set<string> names;
    
    while(names.size()<3){
        
        cout<<names.size()<<" names so far. Enter a name: "<<endl;
        string name;
        cin>>name;
        names.insert(name);
        
    }
    
    for(set<string>::iterator it = names.begin(); it != names.end(); ++it){
        cout<<*it<<endl;
    }
}

