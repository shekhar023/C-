//
//  main.cpp
//  Kangaroo
//
//  Created by Shekhar Chaudhary on 09/10/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

int main(){
    
    int x1,v1,x2,v2,sum1,sum2,i=0,flag=0;
    cin>>x1>>v1>>x2>>v2;
    sum1=x1+v1;
    sum2=x2+v2;
    
    if(x2>x1 && v2>v1){
        cout<<"NO"<<endl;
        exit(0);
    }
    while(i<=10000){
        if(sum1!=sum2){
            sum1=sum1+v1;
            sum2=sum2+v2;
        }
        else{
            flag=1;
        }
        i++;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
