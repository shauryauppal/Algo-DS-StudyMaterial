#include <bits/stdc++.h>
using namespace std;
void findarray(int A[],int n,int k)
{
    deque<int> dq;
    int i;
    for(i=0;i<k;i++)
    {
        while(!dq.empty() && A[i]>=A[dq.back()])
            dq.pop_back();

        dq.push_back(i);
    }
    for(;i<n;i++)
    {
         cout<<A[dq.front()]<<' ';
         while(!dq.empty() && dq.front() <=i-k)
            dq.pop_front();
         while(!dq.empty() && A[i]>=A[dq.back()])
            dq.pop_back();
         dq.push_back(i);
    }
    cout<<A[dq.front()];
}
int main()
{
    int n;
    cout<<"\nEnter number of elements->";
    cin>>n;
    int A[n];
    cout<<"\nEnter elements->\n";
    for(int i=0;i<n;i++)
        cin>>A[i];
    int k;
    cout<<"\nEnter window size->";
    cin>>k;
    findarray(A,n,k);
    return 0;
}
