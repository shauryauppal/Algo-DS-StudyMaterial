#include <iostrem>
using namespace std;
intmain()
{
    int n;
    cin>>n;//size of array
    int arr[n],ct=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
            ct++;
    }
    cout<<"No. of inversions:-"<<ct;
    return 0;
}
