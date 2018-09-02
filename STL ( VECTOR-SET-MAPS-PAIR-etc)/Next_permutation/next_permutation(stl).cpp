#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    next_permutation(A,A+n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<' ';
    return 0;
}
