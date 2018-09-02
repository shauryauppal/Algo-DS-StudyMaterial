#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=(m==1 || n%2==0) ? 2 : 1;
        cout<<ans<<'\n';
    }
    return 0;
}
