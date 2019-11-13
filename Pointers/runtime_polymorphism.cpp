//
//  runtime_polymorphism.cpp
//  C++
//
//  Created by Shekhar Chaudhary on 28/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>
#include<cstring>
#include <vector>

using namespace std;

class media{
protected:
    char *title=new char[50];
    float price;
public:
    media(char *s,float a)
    {
        strcpy(title,s);
        price=a;
    }
    virtual void display(){}
    
};

class book:public media{
    int pages;
public:
    book(char *s,float a,int p):media(s,a){
        pages=p;
    }
    void display();
};

class tape : public media{
  
    float time;
public:
    tape(char *s,float a,float t):media(s,a){
        time=t;
    }
    void display();
};

void book::display(){
    cout<<"\nTtile: "<<title<<endl;
    cout<<"Pages: "<<pages<<endl;
    cout<<"Price: "<<price<<endl;
}

void tape::display(){
    cout<<"\nTitle: "<<title<<endl;
    cout<<"Play Time: "<<time<<"mins"<<endl;
    cout<<"Price: <<"<<price<<endl;
}

int main(){
    char *title=new char[30];
    float price,time;
    int pages;
    
    cout<<"\nENTER BOOK DETAILS"<<endl;
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Pages: ";
    cin>>pages;
    
    book book1(title,price,pages);
    
    cout<<"\nENTER TAPE DETAILS"<<endl;
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Play Time: ";
    cin>>time;
    
    tape tape1(title,price,time);
    
    media* list[2];
    list[0]=&book1;
    list[1]=&tape1;
    cout<<"\nMEDIA DETAILS";
    
    cout<<"\n.......BOOK.......";
    list[0]->display();
    
    cout<<"\n.......TAPE........";
    list[1]->display();
    
    return 0;
    
}

