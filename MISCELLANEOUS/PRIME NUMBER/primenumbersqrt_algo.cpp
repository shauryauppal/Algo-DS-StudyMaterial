#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n,x,i,flag=1;
    cin>>n;
    x=sqrt(n);
    for(i=2;i<=x;i++)
    {
        if(n%i==0)
            flag=0;

    }
    if(flag==1)
        cout<<"prime";
    else cout<<"not prime";
    return 0;
}
