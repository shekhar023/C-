//
//  Pointer_with_Arrays.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 25/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>

using namespace std;

int main(){
    int arr[10]={1,99,4,37,88,3,19,45,62,87};
    int i,num,*ptr;
    ptr=arr;
    cout<<"Enter element to be Searched: ";
    cin>>num;
    for(i=0;i<10;i++){
        if(*ptr==num){
            cout<<endl<<num<<" Present in Array"<<endl;
            break;
        }
        else if(i==9){
            cout<<endl<<num<<" is not present in the Array"<<endl;
        }
        ptr++; //incrementing pointer to make to point to the next element of the array
    }
}
