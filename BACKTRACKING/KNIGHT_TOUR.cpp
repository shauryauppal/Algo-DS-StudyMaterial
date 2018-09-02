//KNIGHT TOUR PROBLEM
#include <bits/stdc++.h>
#define N 8
using namespace std;
bool isSafe(int sol[][N],int x,int y)
{
    //check already visited or coordinates off board
    if(x<0 || x>=N || y<0 || y>=N || sol[x][y]!=-1)
        return false;

    return true;
}
bool KnightTour(int sol[][N],int x,int y,int index)
{
    if(index==N*N)
    {
        //print solution
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
                cout<<sol[i][j]<<'\t';
            cout<<'\n';
        }
        exit(0);
    }
    /* xMove[] and yMove[] define next move of Knight.
       xMove[] is for next value of x coordinate
       yMove[] is for next value of y coordinate */
    /*
    NOTE: BE CAREFUL ABOUT THE MOVE PATTERN YOU ARE USING
    IF WRONG USED, A INFINITE LOOP WILL RUN
    */
     int xmove[8] = {  2, 1, -1, -2, 1, 2, -1, -2};
    int ymove[8] = {  1, 2,  2,  1, -2, -1, -2, -1 };
    /* You may also use this pattern
    int xmove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int ymove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };*/
    int k,next_x,next_y;
    for(k=0;k<8;k++)
    {
        next_x=x+xmove[k];
        next_y=y+ymove[k];
       if(isSafe(sol,next_x,next_y)==true)
       {
           sol[next_x][next_y]=index;
           if(KnightTour(sol,next_x,next_y,index+1)==true)
            return true;
           else
            sol[next_x][next_y]=-1;//backtracking
       }
    }
    return false;
}
int main()
{
    int sol[N][N];
     /* Initialization of solution matrix */
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            sol[i][j]=-1;
    }

    // Since the Knight is initially at the first block
    sol[0][0]=0;
    KnightTour(sol,0,0,1);
    return 0;
}
