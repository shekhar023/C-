//  main.cpp
//  VirtualFunction
//  Created by Shekhar Chaudhary on 28/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include <iostream>

using namespace std;

class weapon{
public:
    virtual void features(){
        cout<<"Loading weapon features "<<endl;
    }
};

class bomb : public weapon{
public:
    void features(){
        cout<<"Loading weapon features "<<endl;
    }
};

class gun : public weapon{
public:
    void features(){
        cout<<"Loading weapon features "<<endl;
    }
};

class loader{
public:
    void loadfeatures(weapon *weapon){
        weapon->features();
    }
};

int main(){
    loader *l=new loader;
    weapon *w;
    bomb b;
    gun g;
    w=&b;
    l->loadfeatures(w);
    w=&g;
    l->loadfeatures(w);
    return 0;
}
