#include <iostream>
#include <cstring>

using namespace std;

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int len = password.size();
    string specials = "!@#$%^&*()-+";
    bool small = false, caps = false, numeric = false, special = false;
    for(int i=0; i < len; i++) {
        if(password[i] >= 'a' && password[i] <= 'z')
            small = true;
        if(password[i] >= 'A' && password[i] <= 'Z')
            caps = true;
        if(password[i] >= '0' && password[i] <= '9')
            numeric = true;
        if(specials.find(password[i]) != string::npos)
            special = true;
    }
    int ans = 0;
    if(!small) ans++;
    if(!caps) ans++;
    if(!numeric) ans++;
    if(!special) ans++;
    if(len + ans < 6) ans+= 6-(len+ans);
    return ans;
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}
