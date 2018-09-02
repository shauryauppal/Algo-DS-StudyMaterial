#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair <int,int> p1,p2;
    cout<<"\nEnter values for p1->";
    cin>>p1.first>>p1.second;
    cout<<"\nData in pair p1 is->"<<p1.first<<' '<<p1.second;

    int x,y;
    cout<<"\nEnter values for p2->";
    cin>>x>>y;
    p2=make_pair(x,y);
    cout<<"\nData in pair p2 is->"<<p2.first<<' '<<p2.second;
    return 0;
}
