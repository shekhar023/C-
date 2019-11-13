//
//  main.cpp
//  gradstud
//
//  Created by Shekhar Chaudhary on 14/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

int main(){
    int ar[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        int mod=ar[i]%5;
        int diff=5-mod;
        if(ar[i]>=38 && mod<5 && ar[i]%10<5){
            ar[i]=ar[i]+diff;
            cout<<ar[i]<<endl;
        }
        else{
            cout<<ar[i]<<endl;
        }
        
    }
}
