#include <bits/stdc++.h>
using namespace std;
long long fastexp(long long a,long long b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    long long R=fastexp(a,b/2);
    if(b%2==0)
        return R*R;
    else return R*a*R;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<fastexp(a,b);
}
