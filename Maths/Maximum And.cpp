#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,A,B,ans=0;
        cin>>A>>B;
        if(B%2!=0)
            ans=B-1;
        else
            ans=B-2;

        if(ans>=A)
            cout<<ans<<'\n';
        else
            {x=A&B;
            cout<<x<<'\n';}

        //cout<<ans<<'\n';
    }
}
