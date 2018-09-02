#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1;
    vector <int> v2;
    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v2.push_back(x);
    }

    vector <int> tmp(max(v1.size(),v2.size()));
    vector <int> res=vector <int> (tmp.begin(),set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),tmp.begin()));

    vector <int> :: iterator it;
    for(it=res.begin();it!=res.end();it++)
        cout<<*it<<'\t';

}

