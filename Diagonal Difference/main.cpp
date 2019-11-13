//
//  main.cpp
//  Diagonal Difference
//
//  Created by Shekhar Chaudhary on 03/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int ar[50][50]; long int d1=0,d2=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                d1+=ar[i][j];
            if (i == n - j - 1)
                d2+=ar[i][j];
        }
    }
    cout<<abs(d1-d2)<<endl;
}
