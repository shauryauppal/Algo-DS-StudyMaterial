#include <bits/stdc++.h>
using namespace std;
int dp[100][100]={0};
int edit(string s,string t,int n,int m)
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    if(dp[n][m]!=0)
        return dp[n][m];
     else if(s[n-1]==t[m-1])
        return ( dp[n][m]=edit(s,t,n-1,m-1) );
    else
        return ( dp[n][m]=1+ min( edit(s,t,n-1,m-1), min( edit(s,t,n-1,m), edit(s,t,n,m-1))) );
}
int main()
{
    string s,t;
    cin>>s>>t;
    int cost=edit(s,t,s.length(),t.length());
    cout<<"\nCost is->"<<cost<<'\n';
    return 0;
}
