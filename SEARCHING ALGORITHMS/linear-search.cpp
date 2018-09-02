//linear search iterative
#include <bits/stdc++.h>
using namespace std;
void linearsearch(int arr[],int size,int ele)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            flag=1;
            cout<<"\nElement "<<ele<<" found at->"<<i+1;
            return;
        }
    }
    if(flag==0)
        cout<<"\nElement not found.";
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
