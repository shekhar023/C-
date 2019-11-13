//
//  main.cpp
//  File_Handeling
//
//  Created by Shekhar Chaudhary on 31/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream fout;
    string line;
    
    fout.open("sample.rtf");
    
    while(fout){
        getline(cin,line);
        if(line=="-1")
            break;
        
        fout<<line<<endl;
    }
    fout.close();
    
    ifstream fin;
    
    fin.open("sample.rtf");
    
    while(fin){
        getline(fin,line);
        
        cout<<line<<endl;
    }
    fin.close();
}
