#include <bits/stdc++.h>
using namespace std;
void display(stack <int>& s)
{
    int temp;
    while(!s.empty())
    {
        temp=s.top();
        cout<<temp<<'\t';
        s.pop();
    }
}
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    stack <int> s;
    int n,x;
    cout<<"\nEnter number of elements to push->";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    display(s);

    return 0;
}
