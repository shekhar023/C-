#include <iostream>
#include <cstring>

using namespace std;

int main (){
    
    string s1,s2;
    
    cout<<"Enter string one: ";
    cin>>s1;
    cout<<"enter string two: ";
    cin>>s2;
    
    cout<<"\norignal strings are: "<<endl;
    cout<<"s1 = "<<s1<<endl<<"s2 = "<<s2<<endl;
    
    //inserting a string  into another
    cout<<"Place  s2 inside s1 \n";
    s1.insert(4, s2);
    cout<<"Modifies s1 = "<<s1<<endl;
    
    
    //removing characters in a string
    
    cout<<"Remove 5 characters from S1"<<endl;
    s1.erase(4,5);
    cout<<"Now s1 = "<<s1<<endl;
    
    //replacing characters in a string
    cout<<"Replace middle 3 characters in s2 with s1 \n";
    s2.replace(1, 3, s1);
    cout<<"Now s2 = "<<s2<<endl;
    
    return 0;
}
