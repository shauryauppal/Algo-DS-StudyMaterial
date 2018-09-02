#include <bits/stdc++.h>
using namespace std;
long long BIT[100010],A[100010],n;
void update(int x,int delta)
{
    for(;x<=n;x+=x&(-x))
    {
        BIT[x]+=delta;
    }
}
long long query(int x)
{
    long long sum=0;
    for(;x>0;x-=x&(-x))
    {
        sum+=BIT[x];
    }
    return sum;
}
int main()
{
    memset(BIT,0,sizeof(BIT));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        update( i , A[i] );
    }

    int l,u;
    cout<<"\nEnter Range to find sum->";
    cin>>l>>u;
    cout<<query(u)-query(l-1);
    return 0;
}
