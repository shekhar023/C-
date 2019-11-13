//
//  main.cpp
//  Sock Merchant
//
//  Created by Shekhar Chaudhary on 09/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include <iostream>

using namespace std;

int main(){
    
    int n,count=0;
    cin>>n;
    int *ar=new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    sort(ar,ar+n);
    
    for (int i=0;i<n-1;i++){
        if(ar[i]==ar[i+1]){
            count++;
            i++;
        }
    }
    cout<<count<<endl;
    delete[] ar;
    return 0;    
}
