//RAT MAZE PROBLEM
#include <bits/stdc++.h>
#define n 4
using namespace std;
bool isSafe(int maze[][n],int x,int y)
{
    //rat save if 1
    if(maze[x][y]==1)
        return true;

    return false;
}
bool RatMaze(int maze[][n],int x,int y,int sol[][n])
{
    //rat at destination
    if(x==n-1 && y==n-1)
    {
        sol[x][y]=1;
        cout<<"\nSolution=>\n";
        //rat at destination print matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<sol[i][j]<<" ";
            cout<<'\n';
        }
        exit(0);
    }

    if(isSafe(maze,x,y))
    {
        sol[x][y]=1;

        if(RatMaze(maze,x+1,y,sol)==true)
            return true;

        if(RatMaze(maze,x,y+1,sol)==true)
            return true;

        sol[x][y]=0;
        //return false;
    }
    return false;
}
int main()
{
    int maze[n][n],sol[n][n];
    cout<<"\nEnter maze problem matrix=>\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>maze[i][j];
    }
    //Initializing solution matrix to 0
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            sol[i][j]=0;

    RatMaze(maze,0,0,sol);
    return 0;
}
