//C++ program to find smallest number whose
//factorial has n trailing zeros
#include <bits/stdc++.h>
using namespace std;

bool check(int a,int b)
{
    int t=a,ct=0,f=5;
    while(f<=t)
    {
        ct+=t/f;
        f=f*5;
    }
    return (ct >=b);
}

int findNum(int n)
{
    if(n==1)
        return 5;

    int low=0,high=n*5;
    while(low<high)
    {
        int mid = (low+high) >> 1;
        if(check(mid,n))
            high = mid;
        else low=mid+1;
    }
    return low;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int n1=findNum(n);
        if(n1==findNum(n+1))
            cout<<0<<'\n';
        else
        {
            cout<<5<<'\n';
            for(int i=0;i<5;i++)
            {
                cout<<n1+i<<' ';
            }
        }
        cout<<'\n';
    }
}
