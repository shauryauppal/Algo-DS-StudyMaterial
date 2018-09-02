#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
bool find_subset(int set[],int n,int sum)
{
    //int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
        for(int j=0;j<=sum;j++)
          dp[i][j]=0;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(set[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else dp[i][j]= max( dp[i-1][j], set[i-1]+dp[i-1][j-set[i-1]]);
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
            cout<<dp[i][j]<<' ';
        cout<<'\n';
    }
    if(dp[n][sum]==sum)
        return true;
    else false;
}
int main()
{
    int n,sum;
    cout<<"\nEnter n & sum->";
    cin>>n>>sum;
    int set[n];
    cout<<"\nEnter set elements->";
    for(int i=0;i<n;i++)
        cin>>set[i];
    bool ans=find_subset(set,n,sum);
    if(ans==sum)
        cout<<"\nFound a subset with given sum->"<<ans<<'\n';
    else cout<<"\nNo subset found";
    return 0;
}
