#include <bits/stdc++.h>
using namespace std;
//NOTE->
//even^even=even
//even^odd=odd
//odd^even=odd
//odd^odd=even
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n],ct1=0,ct2=0;

        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]%2==0)
            {
                ct1++;
            }
            if(A[i]%2==1)
                ct2++;
        }
        cout<<ct1*ct2<<'\n';
    }
    return 0;
}
