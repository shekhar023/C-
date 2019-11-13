//
//  main.cpp
//  HackerRank in a String
//
//  Created by Shekhar Chaudhary on 07/05/19.
//  Copyright © 2019 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

void Hacker_In_String(string str, int queries){
    
    string hacker = "hackerrank";
    for(int i = 0; i < queries; i++){
        cin >> str;
        int count = 0;
        for(int j = 0; j < str.length(); j++){
            if(count < hacker.length() && j < str.length() && hacker[count] == str[j]) count++;
        }
        
        if(count == hacker.length())cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}
int main(){
    
    int *queries = new int;
    cin>>*queries;
    
   string *str  = new string;
    
   Hacker_In_String(*str,*queries);
    
    delete str;
    delete queries;
    
}
