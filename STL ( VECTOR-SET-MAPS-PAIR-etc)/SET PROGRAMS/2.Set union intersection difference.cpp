#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <int> s1,s2;
    vector <int> s3(100);
    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        s1.insert(x);
    }
    for(int i=0;i<5;i++)
    {
        cin>>x;
        s2.insert(x);
    }

    vector <int>::iterator it;

    it=set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),s3.begin());
       //for intersection set_intersection
       //for difference set_difference

    s3.resize(it-s3.begin());

    for(it=s3.begin();it!=s3.end();it++)
        cout<<*it<<'\t';
}
