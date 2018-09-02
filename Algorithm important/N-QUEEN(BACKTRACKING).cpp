//backtracking n-queen
#include <bits/stdc++.h>
#define n 6
using namespace std;
bool isSafe(int board[n][n],int row,int col)
{
    int i,j;
    //check for row
    for(i=0;i<col;i++)
    {
        if(board[row][i]==1)
            return false;
    }
    //check for upper diagonal
    for(i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j]==1)
            return false;
    }

    //check for lower diagonal
    for(i=row,j=col;i<n && j>=0;i++,j--)
    {
        if(board[i][j]==1)
            return false;
    }

    return true;
}
bool NQueenBackTrack(int board[n][n],int col)
{
    //print matrix
    int i,j;
    if(col>=n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<board[i][j];

            cout<<'\n';
        }
        exit(0);
    }

    for(int i=0;i<n;i++)
    {
        if(isSafe(board,i,col)==true)
        {
            //insert queen
            board[i][col]=1;
            //recur to place next queen
            if(NQueenBackTrack(board,col+1)==true)
                return true;
            //if not placed correct
            board[i][col]=0;
        }
    }
    //no solution exist
    return false;
}
int main()
{
    int board[n][n]={0};
    NQueenBackTrack(board,0);
    return 0;
}
