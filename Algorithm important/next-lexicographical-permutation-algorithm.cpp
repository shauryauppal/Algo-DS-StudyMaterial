#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements->";
    cin>>n;
    vector <int> A(n);
    for(int i=0;i<n;i++)
            cin>>A[i];

    int t;
    for(int i=0;i<n;i++)
    {
        if(A[i]>A[i+1])
          {
              t=i;
          }
    }

    int pivot=A[t-1];
}
