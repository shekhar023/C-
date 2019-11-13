//
//  main.cpp
//  BubbleSort
//
//  Created by Shekhar Chaudhary on 19/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
using namespace std;
int main(){
    int *arr=NULL;
    int size,i,j;
    cout<<"Enter the size of Array:- \n";
    cin>>size;
    arr= new int[size];
    cout<<"\nEnter the Array:-\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
                
        }
    }
    cout<<"\nSorted Array is:-\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    delete arr;
    arr=NULL;
}
