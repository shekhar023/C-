//
//  characer_with_get()_and_put().cpp
//  C++
//
//  Created by Shekhar Chaudhary on 30/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>

using namespace std;
int main(){
    int count=0;
    char c;
    cout<<"Input Text"<<endl;
    
    cin.get(c);
    
    while(c!='\n'){
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"\nNumber of characters are: "<<count<<endl;
    
}
