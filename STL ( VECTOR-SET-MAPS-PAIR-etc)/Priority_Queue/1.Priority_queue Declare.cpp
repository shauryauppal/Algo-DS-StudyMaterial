#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cout<<"\nEnter number of elements ->";
    cin>>n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        pq.push(x);
    }
    //display

    int temp;
    while(!pq.empty())
    {
        temp=pq.top();
        cout<<temp<<'\t';
        pq.pop();
    }
    return 0;
}
