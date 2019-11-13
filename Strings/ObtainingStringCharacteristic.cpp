#include <iostream>
#include <cstring>

using namespace std;

void display(string str){
    cout<<"Size: "<<str.size()<<endl;
    cout<<"Length: "<<str.length()<<endl;
    cout<<"Capacity: "<<str.capacity()<<endl;
    cout<<"Maximum Size "<<str.max_size()<<endl;
    cout<<"Empty: "<<(str.empty() ? "yes" : "no ");
    cout<<endl<<endl;
}

int main(){

    string str=*new string;
    cout<<"Enter a String:"<<endl;
    cin>>str;
    cout<<"Initial Status: "<<endl;
    display(str);
    
    cout<<"Enter a string (one word): "<<endl;
    cin>>str;
    cout<<" Status now: "<<endl;
    display(str);
    
    str.resize(15);
    cout<<" Status after resizng: "<<endl;
    display(str);
    cout<<endl;
    
    return 0;
}
