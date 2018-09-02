#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int count[31]={0};
        while(n--)
        {
            cin>>x;
            int i=0;
            while(x!=0)
            {
                count[i]+=x&1;
                i++;
                x=x>>1;
            }
        }
        int t= max_element(count,count+31)-count;
            cout<<t<<'\n';
    }
    return 0;
}
