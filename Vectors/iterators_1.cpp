//  iterators_1.cpp
//  C++
//  Created by Shekhar Chaudhary on 28/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;
    int size,n;
    cin>>size;
    for (int i = 1; i <= size; i++){
        cin>>n;
        g1.push_back(n);
    }
    sort(g1.begin(), g1.end());
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
    
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
    
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
    
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
    
    cout<<endl;
    return 0;
}
