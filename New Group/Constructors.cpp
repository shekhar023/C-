//  Constructors.cpp
//  Constructors
//  Created by Shekhar Chaudhary on 22/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
using namespace std;
class construct{
public:
    int a,b;
    construct(){
        a=5;
        b=10;
    }
};
int main(){
    construct c;
    cout<<"The Sum is:"<<c.a+c.b<<endl;
    return 0;
}
