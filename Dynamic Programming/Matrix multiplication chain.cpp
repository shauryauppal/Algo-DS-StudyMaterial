#include <bits/stdc++.h>
using namespace std;
int min_count(int P[],int n)
{
    int dp[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dp[i][j]=0;
            int ct=0;
    for(int i=0,j=ct;j<n;i++,j++)
    {

            if(i==j)
                dp[i][j]=0;
            else{
             int ans=INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                ans=min(ans,dp[i][k]+dp[k+1][j]+P[i-1]*P[k]*P[j]);
            }
            dp[i][j]=ans;

            }
        if(j==n-1)
          {
              ct++;
              i=-1;
              j=ct-1;
          }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(i!=0)
            cout<<dp[i][j]<<' ';
        cout<<'\n';
    }
}
int main()
{
    int n;
    cin>>n;
    int P[n];
    for(int i=0;i<n;i++)
        cin>>P[i];
    int ans=min_count(P,n);
    cout<<ans<<'\n';
    return 0;
}
