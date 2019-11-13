//  this_pointer.cpp
//  C++
//  Created by Shekhar Chaudhary on 24/08/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
#include <iostream>

using namespace std;
class Employee {
public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout<<id<<"  "<<name<<"  "<<salary<<endl;
    }
};
int main(void) {
    Employee e1 =Employee(01, "Shekhar", 890000);
    Employee e2=Employee(02, "Kratos", 59000);
    e1.display();
    e2.display();
    return 0; 
}
