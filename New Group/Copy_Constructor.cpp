//  Copy_Constructor.cpp
//  C++
//  Created by Shekhar Chaudhary on 22/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
using namespace std;
class construct{
    int x;
    int y;
public:
    construct(int a,int b){
        x=a;
        y=b;
    }
    construct(const construct &c2)//Copy Constructor
    {
        x=c2.x;
        y=c2.y;
    }
    int getX(){return x;}
    int getY(){return y;}
};
int main(){
    construct c1(10,15);//Normal Constructor Called here;
    construct c2=c1;//Copy Constructor called here;
    cout << "c1.x= " << c1.getX() << ",c1.y= " << c1.getY()<<endl;
    cout << "c2.x= " << c2.getX() << ",c2.y= " << c2.getY()<<endl;
}
