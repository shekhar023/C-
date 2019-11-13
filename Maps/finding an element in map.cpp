//
//  finding an element in map.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 27/03/19.
//  Copyright © 2019 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(){
    
    map<string, int> items;
    cout<<"Enter 5 items and their quantities"<<endl;
    
    while(items.size()<5){
        
        cout<<"Enter item: ";
        string item;
        cin>>item;
        cout<<"Enter quantity: ";
        int qty;
        cin>>qty;
        items.insert(make_pair(item, qty));
    }
    
    for(map<string,int>::iterator it = items.begin(); it != items.end(); ++it){
        
        cout<<"items [ "<<it->first<<" ] = "<<it->second<<endl;
    }
    
}
