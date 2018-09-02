#include <bits/stdc++.h>
using namespace std;
int maxcrosspoint(int A[],int l,int mid,int h)
{
    int sum=0,Lsum=-1000,Rsum=-1000;
    for(int i=mid;i>=l;i--)
    {
        sum=sum+A[i];
        if(sum>Lsum)
            Lsum=sum;
    }
    sum=0;
    for(int i=mid+1;i<=h;i++)
    {
        sum=sum+A[i];
        if(Rsum<sum)
            Rsum=sum;
    }
    return Lsum+Rsum;
}
int max_sum(int A[],int l,int h)
{
    if(l==h)
        return A[l];
    int mid=(l+h)/2;
    return max(max(max_sum(A,l,mid),max_sum(A,mid+1,h)) ,maxcrosspoint(A,l,mid,h) );

}
int main()
{
   int n;
   cout<<"\nEnter size->";
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
        cin>>A[i];

   int ans=max_sum(A,0,n-1);
   cout<<"\nMax. sum is->"<<ans<<'\n';
   return 0;
}
