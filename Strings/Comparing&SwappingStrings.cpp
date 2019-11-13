#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    string s1("Road");
    string s2("Read");
    string s3("Red");
    
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<"s3 = "<<s3<<endl;
    
    int x = (int)s1.compare(s2);
    if(x==0)
        cout<<"s1 == s2"<<endl;
    else if(x>0)
        cout<<"s1 > s2"<<endl;
    else
        cout<<"s1 < s2"<<endl;
    
    
    int a=(int)s1.compare(0,2,s2,0,2);
    int b=(int)s2.compare(0,2,s1,0,2);
    int c=(int)s2.compare(0,2,s3,0,2);
    int d=(int)s2.compare(s2.size()-1,1,s3,s3.size()-1,1);

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl
    <<"c = "<<c<<endl<<"d = "<<d<<endl;
    
    cout<<"\nBefore Swap: "<<endl;
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    
    s1.swap(s2);
    
    cout<<"\nAfter Swap: "<<endl;
    
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    
    return 0;
    
}
