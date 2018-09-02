//this is giving error
/*#include <bits/stdc++.h>
using namespace std;
int search_ele(int arr[],int n)
{
    int l=0,h=n-1;
    while (l <= h)
    {
        int mid = (l + h)/2;
        if (arr[mid] == mid)
            return mid;
        if (arr[mid] < mid)
            l = mid + 1;
        else
            h= mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];

  int pos=search_ele(A,n);
    cout<<"Position->"<<pos;
    return 0;
}

*/
