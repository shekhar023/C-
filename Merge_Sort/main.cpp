//
//  main.cpp
//  Merge_Sort
//
//  Created by Shekhar Chaudhary on 10/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include<iostream>
#include<cmath>

using namespace std;

class Merge_Sort{
    int *ar=NULL;
    int sizeofar;
    int *leftar=NULL;
    int *rightar=NULL;
    int i=0,j=0,k=0;
    int mid,div,lenofleft,lenofright;
public:
    void getdata();
    void mergesort(int *ar);
    void merge(int *leftar,int *rightar,int *ar);
    void display();
};

void Merge_Sort::getdata(){
    
    cout<<"Enter the size of Array: ";
    cin>>sizeofar;
    ar=new int[sizeofar];
    cout<<"\n Enter the Array: "<<endl;
    for(i=0;i<sizeofar;i++){
        cin>>ar[i];
    }
    mergesort(ar);
}

void Merge_Sort::mergesort(int *ar){
    div=sizeof(ar);
    if(div<2)
        return;
    
    mid=div/2;
    
    if(mid%2!=0){
        mid=floor(mid);
    }
    
    leftar=new int[mid];
    rightar=new int[div-mid];
    
    for(i=0;i<mid;i++){
        leftar[i]=ar[i];
    }
    for(i=mid;i<div-1;i++){
        rightar[i-mid]=ar[i];   //index of right arrray also begins with zero (i-mid)
    }
    
    mergesort(leftar);
    mergesort(rightar);
    merge(leftar,rightar,ar);
}

void Merge_Sort::merge(int *leftar, int *rightar, int *ar){
    lenofleft=sizeof(leftar);
    lenofright=sizeof(rightar);
    
    while(i< lenofleft && j<lenofright){
        if(leftar[i]<=rightar[j]){
            ar[k]=leftar[i];
            i++;
        }
        else{
            ar[k]=rightar[j];
            j++;
        }
    }
    while(i<lenofleft){
        ar[k]=leftar[i];
        i++;
        k++;
    }
    while(j<lenofright){
        ar[k]=rightar[j];
        j++;
        k++;
    }
}

void Merge_Sort::display(){
    cout<<"\n Sorted Array is: "<<endl;
    for(i=0;i<sizeofar;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    delete ar;
    delete leftar;
    delete rightar;
}

int main(){
    Merge_Sort ms;
    ms.getdata();
    ms.display();
    
}





