//linear search with recursion
#include <bits/stdc++.h>
using namespace std;
void linearsearch(int arr[],int n,int ele)
{
    if(n>=0)
    {
        if(arr[n-1]==ele)
        {
            cout<<"\nElement found at->"<<n;
            return;
        }
        else linearsearch(arr,n-1,ele);
    }
    else
        cout<<"\nElement not found";
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
    linearsearch(arr,n,ele);
    return 0;
}

