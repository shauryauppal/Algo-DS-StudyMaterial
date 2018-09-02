#include <bits/stdc++.h>
using namespace std;
int dp[100][100]={0};
int edit(string s,string t,int n,int m)
{
    for(int i=0;i<=n;i++)
        dp[i][0]=i;
    for(int j=0;j<=m;j++)
        dp[0][j]=j;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(s[i-1]==t[j-1])
                dp[i][j]=dp[i-1][j-1];//copy
            else
                dp[i][j]=1+min( dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1]) );
        }
    }
    return dp[n][m];
}
int main()
{
    string s,t;
    cout<<"\nEnter string 's' and string 't'->";
    cin>>s>>t;
    int cost=edit(s,t,s.length(),t.length());
    cout<<"\nCost ->"<<cost<<'\n';
    return 0;

}
