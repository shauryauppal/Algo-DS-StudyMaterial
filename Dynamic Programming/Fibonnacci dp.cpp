#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[10000]={0};
ll fib(ll n)
{
    if(dp[n])
        return dp[n];
    if(n==0)
        return dp[n]= 0;
    else if (n==1)
        return dp[n]=1;
    else return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
    ll n;
    cin>>n;
    fib(n);
    cout<<dp[n];
    return 0;
}
