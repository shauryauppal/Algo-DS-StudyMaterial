#include <bits/stdc++.h>
using namespace std;
int kadane(int A[],int n)
{
    int max_ending_here=0,max_so_far=INT_MIN,s=0,start=0,end=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here+=A[i];

        if(max_ending_here<0)
            {
                max_ending_here=0;
                s=i+1;
            }
        if(max_so_far<max_ending_here)
            {
                max_so_far=max_ending_here;
                start=s;
                end=i;
            }
    }
    cout<<"\nStart->"<<start<<' '<<"end->"<<end<<'\n';
    return max_so_far;
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int maxsum=kadane(A,n);
    cout<<"\nMax sum->"<<maxsum<<'\n';
    return 0;
}
