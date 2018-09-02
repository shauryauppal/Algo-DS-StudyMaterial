#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int LIS(int x[],int y[],int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(x[i-1]==y[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}
int main()
{
    int n;
    cout<<"\nEnter no. of elements->";
    cin>>n;
    int x[n],y[n];
    cout<<"\nEnter elements->";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        y[i]=x[i];
    }
    sort(y,y+n);
    int ans=LIS(x,y,n);
    cout<<"\nLIS->"<<ans<<'\n';
    return 0;
}
