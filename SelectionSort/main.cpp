//
//  main.cpp
//  SelectionSort
//
//  Created by Shekhar Chaudhary on 18/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
using namespace std;
class Sort{
    int i,j,size,num,swap;
    int *arr=NULL;
public:
    void input();
    void sort();
    void display();
};
void Sort :: input(){
    cout<<"enter size\n";
    cin>>size;
    arr=new int[size];
    cout<<"\nenter elemensts\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }
}
void Sort::sort(){
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
}
void Sort::display(){
    cout<<"\nSorted Array is:-\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    delete arr;
    arr=NULL;
}
int main(){
    Sort srt;
    srt.input();
    srt.sort();
    srt.display();
}
