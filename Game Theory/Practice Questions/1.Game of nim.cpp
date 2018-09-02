#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0,x;
        while(n--)
        {
            cin>>x;
            ans^=x;
        }
        if(ans)
            cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}

