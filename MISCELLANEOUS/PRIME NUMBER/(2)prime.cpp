#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n,x,i,flag=1;
    cin>>n;
    if(n%2==0 && n!=2)
    {
        flag=0;//not prime or return 0;
    }
    else if(n==1)
    {
        flag=0;//return 0;
    }
    else{
    x=sqrt(n);
    for(i=3;i<=x;i+=2)
    {
        if(n%i==0)
            flag=0;

    }
    }
    if(flag==1)
        cout<<"prime";
    else cout<<"not prime";
    return 0;
}
