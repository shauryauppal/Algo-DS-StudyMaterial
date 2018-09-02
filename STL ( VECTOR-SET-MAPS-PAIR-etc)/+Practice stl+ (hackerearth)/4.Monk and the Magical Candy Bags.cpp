#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long x,ct=0,temp;
        priority_queue <long long> pq;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }

        while(k--)
        {
            temp=pq.top();
            ct=ct+temp;
            pq.pop();
            pq.push(temp/2);
        }

        cout<<ct<<'\n';
    }
}
