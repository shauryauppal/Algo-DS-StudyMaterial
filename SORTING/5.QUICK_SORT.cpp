//Quick sort algorithm
#include <iostream>
using namespace std;
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(int arr[],int start,int end)
{
    int i,pIndex=start;
    int pivot=arr[end];
    for(i=start;i<=end-1;i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex],arr[end]);
    return pIndex;
}
/*Quick sort function*/
void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pIndex=partition(arr,start,end);
        quicksort(arr,start,pIndex-1);
        quicksort(arr,pIndex+1,end);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;//n is size of array
    int X[n],Y[n];
    for(int i=0;i<n;i++)
        cin>>X[i];//array input

    for(int i=0;i<n;i++)
        cin>>Y[i];//array input

    quicksort(X,0,n-1);//calling of quick sort function
    quicksort(Y,0,n-1);

    for(int i=0;i<n;i++)
        cout<<X[i]<<'\t';//printing of sorted array
        cout<<'\n';
    for(int i=0;i<n;i++)
        cout<<Y[i]<<'\t';
}

