//interpolation search algorithm
#include <bits/stdc++.h>
using namespace std;
void interpolation_search(int arr[],int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=low+(((key-arr[low])*(high-low))/(arr[high]-arr[low]));
        if(arr[mid]==key)
            {
                cout<<"\nElement "<<key<<" found at->"<<mid+1;
                return;
            }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
    }
}
int main()
{
    int n,ele;
    cout<<"\nEnter size of arr->";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements->";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nEnter you want to search";
    cin>>ele;
    interpolation_search(arr,n,ele);
    return 0;
}

