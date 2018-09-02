//N-QUEEN PROBLEM
#include <bits/stdc++.h>
#define n 15
using namespace std;

/* A utility function to check if a queen can
   be placed on board[row][col]. Note that this
   function is called when "col" queens are
   already placed in columns from 0 to col -1.
   So we need to check only left side for
   attacking queens */
bool isSafe(int board[n][n], int row, int col)
{
    int i, j;

    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;

    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<n; i++, j--)
        if (board[i][j])
            return false;

    return true;
}
bool NQueenBackTrack(int board[][n],int col)
{
    //All queens are placed
    if(col==n)
    {
        //print array
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<board[i][j];

            cout<<'\n';
        }
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        /* Check if queen can be placed on
          board[i][col] */
        if(isSafe(board,i,col))
        {
            //Place this queen on board[i][col]
            board[i][col]=1;

            //recur to place other queen
            if(NQueenBackTrack(board,col+1)==true)
            return true;

            /*If placing queen in board[i][col]
            doesn't lead to solution then remove queen from board[i][col]*/
            board[i][col]=0;//Backtrack
        }
    }
    /*If queens cannot be placed */
    return false;
}
int main()
{
    //cout<<"\nEnter size of Chess Board=>";

    int board[n][n]={0};
    NQueenBackTrack(board,0);
    return 0;
}
