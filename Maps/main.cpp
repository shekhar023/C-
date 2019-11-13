//
//  main.cpp
//  MAps
//
//  Created by Shekhar Chaudhary on 27/03/19.
//  Copyright © 2019 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    
    map<string, int> items;
    
    items.insert(make_pair("apples", 12));
    items.insert(make_pair("oranges", 8));
    items["kiwis"] = 44;
    
    for(map<string, int>::iterator it = items.begin(); it != items.end(); ++it){
        
        cout<<"items ["<<it->first<<"] = "<<it->second<<endl;
    }
}
