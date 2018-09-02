/*
Subsequent statements describe a grid game played on an n × n square grid. The player starts by placing a token on any square of the grid. Then on each turn, the player moves the token either one square to the right or one square down. The game ends when player moves the token off the edge of the board. Each square of the grid has a numerical value, which could be positive, negative, or zero. The player starts with a score of zero; whenever the token lands on a square, the player add its value to his score. The object of the game is to score as many points as possible. For example, given the grid below, the player can score 8−6+7−3+4 = 10 points by placing the initial token on the 8 in the second row, and then moving down, down, right, down, down (However, this is not the best possible score for these values). Describe and analyze an efficient algorithm to compute the maximum possible score for a game of Vankin’s Mile, given the n × n array of values
as input.
*/
#include <bits/stdc++.h>
using namespace std;
int dp[100][100]={0};
int cal_max(int Grid[100][100],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            dp[i][j]=Grid[i][j]+max(dp[i+1][j],dp[i][j+1]);
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                if(max<dp[i][j])
                    max=dp[i][j];

                cout<<dp[i][j]<<' ';
            }
        cout<<'\n';
    }
    return max;
}
int main()
{
    int n;
    cout<<"\nEnter size ->";
    cin>>n;
    int Grid[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>Grid[i][j];
    }
    int ans=cal_max(Grid,n);
    cout<<"Max->"<<ans<<'\n';
    return 0;
}
