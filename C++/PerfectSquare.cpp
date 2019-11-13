//
//  PerfectSquare.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 21/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
#include<cmath>
using namespace std;
bool isPrefectSquar(long double num){
    long double squar_root=sqrt(num);
    return ((squar_root-floor(squar_root))==0);
}
int main(){
    long double num;
    cout<<"Enter Number:- ";
    cin>>num;
    if(isPrefectSquar(num))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    return 0;
}

