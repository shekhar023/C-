//
//  main.cpp
//  A Very Big Sum
//
//  Created by Shekhar Chaudhary on 03/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    long long int *ar=NULL;
    int n; long long int result=0;
    cin>>n;
    ar=new long long int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        result=result+ar[i];
    }
    cout<<result;
}
