//
//  Padding().cpp
//  C++
//
//  Created by Shekhar Chaudhary on 25/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

int main(){
    
    cout.fill('<');
    
    cout.precision(3);
    for(int n=1;n<=6;n++){
        
        cout.width(5);
        cout<<n;
        cout.width(10);
        cout<<1.0/float(n)<<endl;
        if(n==3)
            cout.fill('>');
    }
    cout<<"\nPadding changed\n";
    cout.fill('#');
    cout.width(15);
    cout<<12.345678<<endl;
    
    return 0;
}
