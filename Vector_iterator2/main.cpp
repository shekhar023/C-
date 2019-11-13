//
//  main.cpp
//  Vector_iterator2
//
//  Created by Shekhar Chaudhary on 28/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> obj;
    int *num=new int;
    
    cout<<"Enter a Number: "<<endl;
    cin>>*num;
    
    for(int i=0;i<=*num;i++)
        obj.push_back(i);
    
    cout<<"\nSize is: "<<obj.size()<<endl;
    cout<<"Capacity is: "<<obj.capacity()<<endl;
    cout<<"Max Size is: "<<obj.max_size()<<endl;
    
    obj.resize(4);
    
    cout<<"After changing the size: "<<obj.size()<<endl;
    
    if(obj.empty()==false)
        cout<<"Vector is not empty"<<endl;
    else
        cout<<"Vector is empty"<<endl;
    
    obj.shrink_to_fit();
    
    cout<<"Vector elements are: ";
    for(auto i=obj.begin();i!=obj.end();i++)
        cout<<*i<<" ";
    
    cout<<endl;
    delete num;
    return 0;
}
