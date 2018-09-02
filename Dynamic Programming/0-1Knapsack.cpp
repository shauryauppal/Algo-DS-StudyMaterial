#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int cal_knapsack(int C,int val[],int wt[],int n)
{
    //int dp[n+1][C+1];
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=C;w++)
        {
            if(i==0 || w==0)
                dp[i][w]=0;
            else if(wt[i-1]<=w)
                dp[i][w]=max(dp[i-1][w],val[i-1]+dp[i-1][w-wt[i-1]]);
            else
                dp[i][w]=dp[i-1][w];
        }
    }
    return dp[n][C];
}
int main()
{
    int n,C;
    cout<<"\nNo. of items & capacity of knapsack->";
    cin>>n>>C;
    int val[n+1],wt[n+1];
    cout<<"\nEnter values->";
    for(int i=0;i<n;i++)
        cin>>val[i];
    cout<<"\nEnter weights->";
    for(int i=0;i<n;i++)
        cin>>wt[i];
    int ans=cal_knapsack(C,val,wt,n);
    cout<<"\nMax profit->";
    cout<<ans;

    cout<<"\nGrid calucalted->\n";
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=C;w++)
            cout<<dp[i][w]<<' ';
        cout<<'\n';
    }
    return 0;
}
