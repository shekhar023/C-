//
//  main.cpp
//  Staircase
//
//  Created by Shekhar Chaudhary on 06/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cin >> n;
    
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k=n;k>=i;k--)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    
    return 0;
}
