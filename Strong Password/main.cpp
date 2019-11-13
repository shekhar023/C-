#include<iostream>
#include<cstring>

using namespace std;

int minimumNumber(int n, string password){
    
    int len = (int)password.size();
    string specials = "!@#$%^&*()-+";
    bool small =false , caps = false , number = false , special_character = false;
    
    for(int i = 0 ; i<len ; i++){
        if(password[i]>='A' && password[i]<='Z')
            caps = true;
        if(password[i]>='a' && password[i]<='z')
            small = true;
        if(password[i]>='0' && password[i]<='9')
            number = true;
        if(specials.find(password[i]) != string::npos)
            special_character = true;
    }
    int ans = 0;
    if(!small) ans++;
    if(!caps) ans++;
    if(!number) ans++;
    if(!special_character) ans++;
    if(len + ans < 6) ans += 6-(len + ans);
        
        return ans;
}

int main(){
    
    int n;
    cin>>n;
    string password;
    cin>>password;
    int answer = minimumNumber(n,password);
    cout<<answer<<endl;
}
