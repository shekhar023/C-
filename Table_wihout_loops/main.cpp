//
//  main.cpp
//  Table_wihout_loops
//
//  Created by Shekhar Chaudhary on 27/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

void table(int num,int count,int last){
    if(count<=last){
        cout<<num<<" * "<<count<<" = "<<num*count<<" ";
        cout<<endl;
        count++;
        table(num,count,last);
    }
}

int main(){
    int num,last,count=1;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"Till which number you want the Table? ";
    cin>>last;
    cout<<"The Table is: "<<endl;
    table(num,count,last);
}

