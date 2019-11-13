//
//  Add_Two_Complex_Number.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 20/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
using namespace std;
typedef struct complex{
    float real;
    float imag;
}complex;

complex addComplexNumbers(complex,complex);

int main(){
    complex n1,n2,tempnum;
    char sign;
    cout<<"For 1st Complex Number:- "<<endl;
    cout<<"Enter Real and Imaginary Part respectively:- ";
    cin>>n1.real>>n1.imag;
    cout<<endl<<"For 2nd Complex Number:- "<<endl;
    cout<<"Enter Real and Imaginary Part respectively:- ";
    cin>>n2.real>>n2.imag;
    sign=(tempnum.imag>0)?'+':'-';
    //tempnum.imag=(tempnum.imag>0)?tempnum.imag:-tempnum.imag;
    tempnum=addComplexNumbers(n1,n2);
    cout<<"Sum = "<<tempnum.real<<tempnum.imag<<"i"<<endl;
}

complex addComplexNumbers(complex n1,complex n2){
    
    complex temp;
    temp.real=n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return temp;
}

