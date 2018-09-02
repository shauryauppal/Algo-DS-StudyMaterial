#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL)


int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x;
        cin>>n>>m;

        set <long long> A;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            A.insert(x);
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            bool flag=A.find(x)!=A.end();
            if(flag==true)
                cout<<"YES\n";
            else cout<<"NO\n";

            A.insert(x);

        }


    }
}
