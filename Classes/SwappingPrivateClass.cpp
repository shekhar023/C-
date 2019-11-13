//
//  SwappingPrivateClass.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 19/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include<iostream>

using namespace std;

class class_2;

class class_1{
    int value1;
public:
    void indata(int a){value1=a;}
    void display(){cout<<value1<<endl;}
    friend void exchange(class_1 &,class_2 &);
};

class class_2{
    int value2;
public:
    void indata(int a){value2=a;}
    void display(){cout<<value2<<endl;}
    friend void exchange(class_1 &,class_2 &);
};
void exchange(class_1 & x,class_2 & y){
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main(){
    class_1 c1;
    class_2 c2;
    c1.indata(100);
    c2.indata(200);
    cout<<"Values before Exchange:-\n ";
    c1.display();
    c2.display();
    exchange(c1,c2); //swapping
    cout<<"Value after Exchanging:-\n ";
    c1.display();
    c2.display();
    
    return 0;
}
