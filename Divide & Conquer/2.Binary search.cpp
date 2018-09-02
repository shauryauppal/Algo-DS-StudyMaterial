#include <bits/stdc++.h>
using namespace std;
int binarysearch(int A[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]==x)
        {
            return mid;
        }
        else if(A[mid]>x)
        {
            return binarysearch(A,l,mid-1,x);
        }
        else if(A[mid]<x)
        {
            return binarysearch(A,mid+1,r,x);
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int x;
    cout<<"\nEnter element you want to search->";
    cin>>x;

    int pos=binarysearch(A,0,n-1,x);
    cout<<"\nElement -> "<<x<<" occurs at->"<<pos;
    return 0;
}
