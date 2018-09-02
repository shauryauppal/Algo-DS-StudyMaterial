#include<iostream>
#include <climits>
#include <cstdlib>
using namespace std;
int prime(int n)
{
    if(n<=1)
        return 0;//not prime
    if(n<=3)
        return 1;//prime
        if(n%2==0 || n%3==0)
            return 0;//not prime
        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
                return 0;
        }
        return 1;//prime
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,s=0,n,m;
    cin>>t;

    while(t--)
    {

          cin>>n>>m;
           s=0;
     int P[n],count[n],ct=1,max=0;
     for(int i=0;i<n;i++)
     {
       count[i]=0;
     }


    for(int i=0;i<n;i++)
    {
        cin>>P[i];
    }

    for(int i=0;i<n;i++)
    {
       ct=1;
        while( prime(P[i])==1 && prime(P[i+1])==1 )
        {
            i++;
           ct++;
        }

        if(prime(P[i])==0)
            count[i]=-1;
        else
        count[i]=ct;
    }

     //for(int i=0;i<n;i++)
     //{
       //  cout<<count[i]<<' ';
     //}

     int q=sizeof(count)/sizeof(count[0]);
     int max_sum=maxSubArraySum(count,q);
      //cout<<max_sum;
   if(max_sum>m)
    cout<<m<<'\n';
   else cout<<max_sum<<'\n';
    }
    return 0;
}
