//
//  Heron_triangle_Area_Formula.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 20/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float side1 , side2 , side3 , area,s;
    cout<<"\nEnter Side 1:- \n";
    cin>>side1;
    cout<<"\nEnter Side 2:- \n";
    cin>>side2;
    cout<<"\nEnter Side 3:- \n";
    cin>>side3;
    s=(side1+side2+side3)/2;
    area=(s*(s-side1)*(s-side2)*(s-side3)); //Heron's Formula
    cout<<"The Area of Triangle is:- "<<area<<endl;
    return 0;
}
