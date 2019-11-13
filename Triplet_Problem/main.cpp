//
//  main.cpp
//  Triplet_Problem
//
//  Created by Shekhar Chaudhary on 03/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include<iostream>

using namespace std;


int main(){
    int i,a[3],b[3],count_a=0,count_b=0;
    
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            count_a++;
        }
        else if(a[i]<b[i]){
            count_b++;
            
        }
        else if(a[i]==b[i]){}
            
    }
    cout<<count_a<<" "<<count_b;
    
}
