//merge sort algorithm for sorting
#include <bits/stdc++.h>
using namespace std;
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[],int l,int m,int r)
{
    int i,j,k,n1,n2;
    n1=m-l+1;
    n2=r-m;
    int L[n1],R[n2];
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
for(i=0,j=0,k=l;i<n1 && j<n2;)
{
    if(L[i]<R[j])
    {
        arr[k++]=L[i++];
    }
    else if(L[i]>R[i])
    {
        arr[k++]=R[j++];
    }
    else if(L[i]==R[j])
    {
        arr[k++]=L[i++];
        arr[k++]=R[j++];
    }
}
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k++] = L[i++];


    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

/* l is left index and r is the right index of
 the sub-array of arr to be sorted */
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        //Same as (l+r)/2, but avoids overflow for large l & h
        int m=(l+(r-1))/2;
        //sort first and second halves
        mergesort(arr, l, m);//first half
        mergesort(arr, m+1, r);//second half

        merge(arr, l, m, r);
    }
}
/* Driver program to test above functions */
int main()
{
    int n;
    cin>>n;//size of array
    int arr[n],i;
    /*array input*/
    for(i=0;i<n;++i)
        cin>>arr[i];
        //call for sorting array
    mergesort(arr, 0, n-1);
    /*print sorted array*/
    for(i=0;i<n;++i)
        cout<<arr[i]<<'\t';
   return 0;
}
