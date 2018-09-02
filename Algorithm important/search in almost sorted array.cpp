/*Given an array which is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1]. Write an efficient function to search an element in this array. Basically the element arr[i] can only be swapped with either arr[i+1] or arr[i-1].

For example consider the array {2, 3, 10, 4, 40}, 4 is moved to next position and 10 is moved to previous position.

Example:

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
Output: 2
Output is index of 40 in given array

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
Output: -1
-1 is returned to indicate element is not present
*/

#include <bits/stdc++.h>
using namespace std;
int binarysearch(int A[],int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==key)
            return mid;
        if(A[mid+1]==key )
            return mid+1;
        if(A[mid-1]==key)
            return mid-1;
        if(key>A[mid])
        {
            low=mid+2;
        }
        else high=mid-2;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"\nEnter number of elements->";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];

    int key;
    cout<<"\nEnter the element u want to search->";
    cin>>key;

    int index=binarysearch(A,n,key);
    if(index==-1)
        {
            cout<<"\nNot found!!!!!!";
         exit(0);
         }
    cout<<'\n'<<key<<"Found at->"<<index;
    return 0;
}
