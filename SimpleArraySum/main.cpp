//
//  main.cpp
//  SimpleArraySum
//
//  Created by Shekhar Chaudhary on 02/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>

using namespace std;

#include<iostream>

using namespace std;

int main(){
    
    int ar[1000];
    int n,i,result=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ar[i];
        result+=ar[i];
    }
    cout<<result<<endl;
}

