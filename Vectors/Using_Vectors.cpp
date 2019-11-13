//
//  Using_Vectors.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 20/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    vector<int> v;
    
    cout<<"Initial size = "<<v.size()<<endl;
    
    int x;
    
    cout<<"Enter five integer values: ";
    for(int i=0;i<5;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Size after adding 5 values: ";
    cout<<v.size()<<endl;
    
    cout<<"Current contents: "<<endl;
    
}
