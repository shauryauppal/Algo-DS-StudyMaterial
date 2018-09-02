#include <bits/stdc++.h>
using namespace std;
void display(queue<int>& q)
{
    int temp;
    while(!q.empty())
    {
        temp=q.front();
        cout<<temp<<'\t';
        q.pop();
    }
}
int main()
{
    int n,x;
    cout<<"\nEnter number of elements to insert->";
    cin>>n;
    queue <int> q;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.push(x);
    }

    display(q);
    return 0;
}
