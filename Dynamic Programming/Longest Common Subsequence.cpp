#include <bits/stdc++.h>
using namespace std;
int L[100][100]={0};
int lcs(string X,string Y,int m,int n)
{
    int i,j;
    for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
   cout<<"\nGrid ->\n";
   for(int i=0;i<=m;i++)
   {
       for(int j=0;j<=n;j++)
        cout<<L[i][j]<<' ';
       cout<<'\n';
   }
   return L[m][n];
}
int main()
{
    string x,y;
    cout<<"\nEnter string1 & string2->";
    cin>>x>>y;
    int ans=lcs(x,y,x.length(),y.length());
    cout<<"\nLength of LCS->"<<ans<<'\n';
    return 0;

}
