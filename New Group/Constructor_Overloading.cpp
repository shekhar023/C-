//
//  Constructor_Overloading.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 22/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
using namespace std;
class construct{
    float area;
    float a,b;
public:
    construct();
    construct(float,float);
    int display();
};
construct::construct(){
    area=0;
}
construct::construct(float a,float b){
    area=a*b;
}
int construct::display(){
    return area;
}
int main(){
    float a,b;
    cout<<"Enter Two Values:";
    cin>>a>>b;
    construct c(a,b);
    cout<<"The Area is:"<<c.display()<<endl;
}
