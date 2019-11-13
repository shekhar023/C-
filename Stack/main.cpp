//
//  main.cpp
//  Stack
//
//  Created by Shekhar Chaudhary on 30/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include<stack>

using namespace std;

void showstack(stack <int> gq){
    stack <int> g = gq;
    while(!g.empty()){
        cout<<"\t"<<g.top();
        g.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    int *size=new int;
    int *num=new int;
   /* s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);*/
    cout<<"Enter size of stack: ";
    cin>>*size;
    cout<<"Enter Elements is stack: ";
    for(auto i=0;i<*size;i++){
        cin>>*num;
        s.push(*num);
    }
    
    
    cout<<"The Stack is : ";
    showstack(s);
    
    cout<<"Size of stack is : "<<s.size()<<endl;
    cout<<"Top of stack is : "<<s.top()<<endl;
    
    cout<<"After Popping an element from stack: ";
    s.pop();
    showstack(s);
    
    
    delete size;
    delete num;
    
    return 0;
}
