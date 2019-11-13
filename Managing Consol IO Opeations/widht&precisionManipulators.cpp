//
//  widht&precisionManipulators.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 25/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float pi=22.0/7.0;
    cout<<"Value of PI: "<<endl;
    for(int i=2;i<=10;i++){
        
        cout.width(i+1);
        cout.precision(i);
        cout<<pi<<endl;
    }
}
