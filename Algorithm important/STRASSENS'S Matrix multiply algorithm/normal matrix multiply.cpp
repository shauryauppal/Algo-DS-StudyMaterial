#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n],B[n][n],C[n][n],sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>A[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>B[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
                sum+=A[i][k]*B[k][j];

            }
            C[i][j]=sum;
            cout<<C[i][j]<<' ';
        }
        cout<<'\n';
    }

}
