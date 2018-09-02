#include <iostream>
using namespace std;
/*l is left index of array and r is right index of arr[]*/
int merge(int arr[],int l,int m,int r)
{
    int ct=0;
    int i,j,k;
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    /*temp arrays*/
    int L[n1],R[n2];
    /*copy data in temp arrays*/
    for(i=0;i<n1;i++)
        L[i]=arr[i+l];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    for(i=0,j=0,k=l;i<n1 && j<n2;)
    {
        if(L[i]<R[j])
        {
            arr[k++]=L[i++];
        }
        else if(L[i]>R[j])
        {
            arr[k++]=R[j++];
/*In merge process, let i is used for indexing left sub-array and j for right sub-array.
At any step in merge(), if a[i] is greater than a[j], then there are (n1 – i) inversions.
because left and right subarrays are sorted, so all the remaining elements in
left-subarray (a[i+1], a[i+2] ... a[n1]) will be greater than a[j]*/
            ct+=n1-i;
        }
        else if(L[i]==R[j])
        {
            arr[k++]=L[i++];
            arr[k++]=R[j++];
            ct+=m-i;
        }
    }

    while(i<n1)
        arr[k++]=L[i++];

    while(j<n2)
        arr[k++]=R[j++];

        return ct;
}


int mergesort(int arr[],int l,int r)
{
    int ct=0;
    if(l<r)//base condition
    {
        int m=(l+r)/2; //m is middle of array
        /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
        ct=ct+mergesort(arr,l,m);
        ct=ct+mergesort(arr,m+1,r);

        ct=ct+merge(arr,l,m,r);
    }
    return ct;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;//size of array
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int ct=mergesort(arr,0,n-1);//call of merge sort function
    /*printing of sorted array*/
    for(int i=0;i<n;++i)
        cout<<arr[i]<<'\t';
        /*printing of no. of inversions*/
        cout<<'\n'<<"No. of inversions are-:"<<ct;
    return 0;
}
