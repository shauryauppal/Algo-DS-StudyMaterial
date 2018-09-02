#include <bits/stdc++.h>
using namespace std;
int Rotated(int A[],int n)
{
    int min=A[n-1];
    int l=0,r=n-1,mid,k;
    while(l<=r)
    {
        mid=(l+r)/2;

        if((A[mid-1]>A[mid] && A[mid+1]>A[mid]) || mid==0)
        {
            k=mid;
            break;
        }

        if(A[mid]>min)
        {
            l=mid+1;
        }
        if(A[mid]<min)
        {
            min=A[mid];
            r=mid-1;
        }
    }
    return k;
}
int main()
{
    int n;
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
        cin>>A[i];

    int k=Rotated(A,n);
    cout<<"\nThe array is rotated->"<<k<<" times";
    return 0;
}
