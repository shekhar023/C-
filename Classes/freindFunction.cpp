#include<iostream>

using namespace std;

class Friend{
    int a;
    int b;
public:
    void setvalue(){a=25;b=40;}
    friend float mean(Friend f);
};
float mean(Friend f)
{
    return float(f.a+f.b)/2.0; //direct object access
}
int main()
{
    Friend f;
    f.setvalue();
    cout<<"Mean Value:- "<<mean(f)<<endl;
    return 0;
}
