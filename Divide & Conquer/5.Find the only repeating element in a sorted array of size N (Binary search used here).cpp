#include <bits/stdc++.h>
using namespace std;
int check_ele(int A[],int l,int r)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]!=mid+1)
        {
            if(mid>0 && A[mid]==A[mid-1])
                return mid;

            return check_ele(A,l,mid-1);
        }

        return  check_ele(A,mid+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];

    int ele=check_ele(A,0,n-1);
    cout<<"\nThis element repeats->"<<ele;
    return 0;
}
