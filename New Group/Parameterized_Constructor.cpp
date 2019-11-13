//
//  Parameterized_Constructor.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 22/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
using namespace std;
class construct{
    int x;
    int y;
public:
    construct(int,int);
    int getdataX();
    int getdataY();
};
construct::construct(int x1,int y1){
    x=x1;
    y=y1;
}
int construct::getdataX(){
    return (x);
}
int construct::getdataY(){
    return y;
}
int main(){
    int a,b;
    cout<<"Enter Two Values:";
    cin>>a>>b;
    construct c(a,b);
    cout<<"The Values are:"<<c.getdataX()<<" "<<c.getdataY()<<endl;
}

