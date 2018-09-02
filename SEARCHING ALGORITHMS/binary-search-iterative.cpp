//binary search iterative
#include <bits/stdc++.h>
using namespace std;
void binarysearch(int arr[],int n,int ele)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==ele)
            {
                cout<<"\nElement "<<ele<<" found at->"<<mid+1;
                return;
            }
        else if(arr[mid]>ele)
        {
            right=mid-1;
        }
        else if(arr[mid]<ele)
        {
            left=mid+1;
        }
    }
}
int main()
{
    int n,ele;
    cout<<"\nEnter size of arr->";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nEnter you want to search";
    cin>>ele;
    binarysearch(arr,n,ele);
    return 0;
}
