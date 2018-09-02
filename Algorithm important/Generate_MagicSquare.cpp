 #include <bits/stdc++.h>
 using namespace std;
 void magicsquare(int n)
 {
     int A[n][n];
    //n is size of array
    memset(A,0,sizeof(A));
    int i=n/2,j=n-1;

    for(int num=1;num<=n*n;)
    {
        if(i==-1 && j==n)
        {
            i=0;j=n-2;//3rd condition
        }
        else if(i<0)
        {
            i=n-1;
        }
        else if(j==n)
        {
            j=0;
        }
        else if(A[i][j]!=0)//2nd condition
        {
            i++;
            j-=2;
        }

        if(A[i][j]==0)
        {
           A[i][j]=num++;
        }

        i--;j++;//1st condition
    }

    for(int p=0;p<n;p++)
       {
           for(int q=0;q<n;++q)
             cout<<A[p][q]<<" ";

             cout<<'\n';
       }
 }

 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int n;
     cin>>n;//size of array should be odd
     magicsquare(n);//calling of function
     return 0;
 }
