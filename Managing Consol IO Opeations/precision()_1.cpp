//
//  precision()_1.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 25/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout<<"Prescision set to 3 digits\n";
    cout.precision(3);
    
    cout.width(10);
    cout<<"VALUE    ";
    cout.width(15);
    cout<<"SQRT_OF_VALUE"<<endl;
    
    for(int n=1;n<=5;n++){
        cout.width(8);
        cout<<n;
        cout.width(13);
        cout<<sqrt(n)<<endl;
    }
    
    cout<<"Precision set to 5 digits\n";
    cout.precision(5);
    cout<<"sqrt(10) = "<<sqrt(10)<<endl;
    
    cout.precision(0);
    cout<<"sqrt(10) = "<<sqrt(10)<<"(Default setting)\n";
}
