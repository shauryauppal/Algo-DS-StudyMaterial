#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    set <int> s;
    int x;
    for(int i=1;i<=10;i++)
    {
        cin>>x;
        s.insert(x);
    }
    set <int> ::iterator it,it1,it2;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<' ';

        it1=s.find(10);
        it2=s.find(100);
        s.erase(it1,it2);

        cout<<'\n';
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<' ';

}
