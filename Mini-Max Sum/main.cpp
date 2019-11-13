//
//  main.cpp
//  Mini-Max Sum
//
//  Created by Shekhar Chaudhary on 09/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//
#include <iostream>

using namespace std;

int main(){
    
   long long int ar[5],sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    for(int i=0;i<5;i++){
        sum+=ar[i];
    }
    sum=sum-ar[1];
    for(int i=0;i<5;i++){
        sum1+=ar[i];
    }
    sum1=sum1-ar[2];
    for(int i=0;i<5;i++){
        sum2+=ar[i];
    }
    sum2=sum2-ar[3];
    for(int i=0;i<5;i++){
        sum3+=ar[i];
    }
    sum3=sum3-ar[4];
    for(int i=0;i<5;i++){
        sum4+=ar[i];
    }
    sum4=sum4-ar[0];
    
    for(int i=0;i<5;i++){
        if(ar[i]==ar[i+1]){
            sum5+=ar[i];
            sum6+=ar[i];
        }
    }
    //smallest sum
    if(sum<sum1 && sum<sum2 && sum<sum3 && sum<sum4)
        cout<<sum<<" ";
    if(sum1<sum && sum1<sum2 && sum1<sum3 && sum1<sum4)
        cout<<sum1<<" ";
    if(sum2<sum1 && sum2<sum && sum2<sum3 && sum2<sum4)
        cout<<sum2<<" ";
    if(sum3<sum1 && sum3<sum2 && sum3<sum && sum3<sum4)
        cout<<sum3<<" ";
    if(sum4<sum1 && sum4<sum2 && sum4<sum3 && sum4<sum)
        cout<<sum4<<" ";
    if(sum==sum1 && sum==sum1 && sum==sum2 && sum==sum3 && sum==sum4)
        cout<<sum<<" ";
    //greatest sum
    if(sum>sum1 && sum>sum2 && sum>sum3 && sum>sum4)
        cout<<sum;
    if(sum1>sum && sum1>sum2 && sum1>sum3 && sum1>sum4)
        cout<<sum1;
    if(sum2>sum1 && sum2>sum && sum2>sum3 && sum2>sum4)
        cout<<sum2;
    if(sum3>sum1 && sum3>sum2 && sum3>sum && sum3>sum4)
        cout<<sum3;
    if(sum4>sum1 && sum4>sum2 && sum4>sum3 && sum4>sum)
        cout<<sum4;
    if(sum==sum1 && sum==sum1 && sum==sum2 && sum==sum3 && sum==sum4)
        cout<<sum;
    
    
    return 0;
}
