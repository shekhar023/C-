//
//  main.cpp
//  QuickSort
//
//  Created by Shekhar Chaudhary on 26/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
#include<cmath>

using namespace std;

int *ar=NULL;
class Quick_Sort{
    int pivot;
    int P_index;
    int start,end,size;
   // int *ar=NULL;
    
public:
   void getdata();
   void quicksort(int *ar,int,int);
   int partition(int *ar,int,int);
    void display();
};

void Quick_Sort::getdata(){
    cout<<"Enter The size of Array: ";
    cin>>size;
    ar=new int[size];
    cout<<"Enter Array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    quicksort(ar,start,end);
}
void Quick_Sort:: quicksort(int *ar,int start,int end){
    start=0;
    end=size-1;
    if(start<end){
        partition(ar, start, end);
        quicksort(ar, start, P_index-1);
        quicksort(ar, P_index+1, end);
    }
}

int Quick_Sort::partition(int *ar,int start, int end){
    
    pivot=ar[end-1];
    P_index=start;
    for(int i=0;i<end;i++){
        if(ar[i]<=pivot){
            swap(ar[i],ar[P_index]);
            P_index++;
        }
    }
    swap(ar[P_index],ar[end]);
    return P_index;
}
void Quick_Sort::display(){
    cout<<"Sorted Array is: ";
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
}

int main(){
    Quick_Sort qs;
    qs.getdata();
    qs.display();
    qs.~Quick_Sort();
    
    return 0;
}





