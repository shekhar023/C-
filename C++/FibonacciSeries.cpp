//
//  FibonacciSeries.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 20/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
using namespace std;
int main(){
    int num,term1=0,term2=1,nextterm;
    cout<<"Enter the Number:-\n";
    cin>>num;
    cout<<"\nFibonacci Series is:-\n";
    for(int i=0;i<num;i++){
        cout<<term1<<" ";
        nextterm=term1+term2;
        term1=term2;
        term2=nextterm;
    }
    cout<<endl;
}
