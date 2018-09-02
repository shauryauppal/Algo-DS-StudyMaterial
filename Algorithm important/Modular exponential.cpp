#include <bits/stdc++.h>
using namespace std;
long long power(long long a,long long b,long long mod)
{
    if(b==0)
        return 1;
    else if(b%2==1)
        return (a*power((a*a)%mod,(b-1)/2,mod))%mod;
    else return power((a*a)%mod,b/2,mod);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<power(a,b,c);
}
