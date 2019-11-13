#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s1("ABC");
    string s2("XYZ");
    string s3=s1+s2;
    
    if(s1!=s2)
        cout<<s1<<" not equal to "<<s2<<endl;
    
    if(s1>s2)
        cout<<s1<<" greater than "<<s2<<endl;
    else
        cout<<s2<<" greater than "<<s1<<endl;
    
    if(s3==s1+s2)
        cout<<s3<<" is equal to "<<s1+s2<<endl;
    
    int x = s1.compare(s2);
    if(x==0)
        cout<<s1<<" = "<<s2<<endl;
    else if(x>0)
        cout<<s1<<" > "<<s2<<endl;
    else
        cout<<s1<<" < "<<s2<<endl;
    
    
    return 0;
}
