//  main.cpp
//  Birthday Cake Candles
//  Created by Shekhar Chaudhary on 09/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include <iostream>

using namespace std;

void birthday(int *ar,int size){
    
    long int count=0;
    
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    int max=-1;
    for(int i=0;i<size;i++){
        if(ar[i]>max)
            max=ar[i];
    }
    for(int i=0;i<size;i++){
            if(ar[i]==max)
                count++;
    }
    cout<<count<<endl;
}

int main()
{
    int *ar=NULL;
    int size;
    cin>>size;
    ar=new int[size];
    birthday(ar,size);
    delete ar;
}
