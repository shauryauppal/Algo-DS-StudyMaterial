#include <bits/stdc++.h>
using namespace std;
void merge(int A[],int l,int r,int mid)
{
    int n1=mid-l+1,n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=A[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=A[mid+1+j];
    }

    int i,j,k;
    for(i=0,j=0,k=l;i<n1 && j<n2;)
    {
        if(L[i]<R[j])
            A[k++]=L[i++];
        else if(L[i]>R[j])
        {
            A[k++]=R[j++];
        }
        else
        {
            A[k++]=L[i++];
            A[k++]=R[j++];
        }
    }
    while(i<n1)
        A[k++]=L[i++];
    while(j<n2)
        A[k++]=R[j++];
}
void mergesort(int A[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,r);
        merge(A,l,r,mid);
    }

}
int main()
{
    int n;
    cout<<"\nEnter size->";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];

    mergesort(A,0,n-1);
    cout<<'\n';
    for(int i=0;i<n;i++)
        cout<<A[i]<<' ';

        return 0;
}
