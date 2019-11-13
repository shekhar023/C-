#include <iostream>

using namespace std;

int main(){
    
    int s,t,a,b,m,n,app_count=0,ora_count=0;
    cin>>s>>t; //range of house
    cin>>a>>b;//position of trees apple and orange respectively
    cin>>m>>n; //no. of apples and oranges respectively
    int app[m];
    int ora[n];
    
    for(int i=0;i<m;i++){
        cin>>app[i];
        if(app[i]<0)
            app[i]=a+app[i];
        else
            app[i]=a+app[i];
        
        
        if(app[i]>=s && app[i]<=t)
            app_count++;
    }
    
    for(int i=0;i<n;i++){
        cin>>ora[i];
        if(ora[i]<0)
            ora[i]=b+ora[i];
        else
            ora[i]=b+ora[i];
        
        if(ora[i]>=s && ora[i]<=t)
            ora_count++;
    }

    cout<<app_count<<endl<<ora_count<<endl;
    
    return 0;
}
