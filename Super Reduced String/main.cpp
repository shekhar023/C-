#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin>>s;
    int size=(int)s.length();
    
    for(int i=0;i<size;){
        if(s[i]==s[i+1] && i>-1){
            s.erase(i,2);
            i--;
        }
        else
            i++;
    }
    if(s.empty())
        cout<<"Empty String"<<endl;
    else
        cout<<s<<endl;
}
