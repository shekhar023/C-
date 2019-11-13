//
//  main.cpp
//  Grading System
//
//  Created by Shekhar Chaudhary on 16/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>

using namespace std;

int main(){
    
    int n,*ar=NULL,i,*br=NULL;
    cin>>n;
    ar=new int[n];
    br=new int[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    
    for(i=0;i<n;i++){
        
        if(ar[i]>=38){
            int mod = ar[i]%5;
            int diff=5-mod;
            int mod1=ar[i]%10;
            if(mod1==7){
                cout<<ar[i]<<endl;
            }
            else{
            br[i]=ar[i]+diff;
            cout<<br[i]<<endl;
        }
    }
        else{
            cout<<ar[i]<<endl;
        }
    }
    
    delete ar;
    delete br;
    
}
