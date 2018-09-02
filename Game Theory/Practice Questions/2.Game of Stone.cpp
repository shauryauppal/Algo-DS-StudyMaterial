#include <bits/stdc++.h>
using namespace std;
int dp[200];
int main()
{
    int t;
    cin>>t;
    dp[200]={0};
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    dp[4]=1;
    dp[5]=1;
    int x=105;
    for(int x=6;x<=105;x++)
    {


            if(dp[x-2]==0 || dp[x-3]==0 || dp[x-5]==0)
                    dp[x]=1;
        else dp[x]=0;
    }
    while(t--)
        {
        int n;
        cin>>n;
        if(dp[n]==1)
            cout<<"First\n";

        else cout<<"Second\n";
    }
    return 0;
}
