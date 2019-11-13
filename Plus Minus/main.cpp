//
//  main.cpp
//  Plus Minus
//
//  Created by Shekhar Chaudhary on 06/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int *ar=NULL;
    int n;
    float count=0,count2=0,count3=0;
    cin>>n;
    ar=new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]>0)
            count++;
        if(ar[i]<0)
            count2++;
        if(ar[i]==0)
            count3++;
    }
    cout<<setprecision(6)<<(count/n)<<endl;
    cout<<setprecision(6)<<(count2/n)<<endl;
    cout<<setprecision(6)<<(count3/n)<<endl;
    
    delete ar;
}

