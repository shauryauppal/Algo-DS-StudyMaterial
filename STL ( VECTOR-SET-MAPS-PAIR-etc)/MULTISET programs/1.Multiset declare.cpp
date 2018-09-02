/*The set in STL in general, keeps the unique elements only and keep them sorted., and this is the default set.

there are many versions of the set, like the multiset, and it loses the feature that “keep one unique instance” so it can hold many instances of the same value, and also keep them sorted. */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    multiset<int> ms;
    cout<<"\nEnter data for multiset->";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ms.insert(x);
    }
    cout<<"\nEnter data for set->";
    set <int> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }

    multiset <int> ::iterator it1;
    set<int> ::iterator it2;

    cout<<"\nOutput for multiset->";
    for(it1=ms.begin();it1!=ms.end();it1++)
    {
        cout<<*it1<<' ';
    }

    cout<<"\n\nOutput for set->";
    for(it2=s.begin();it2!=s.end();it2++)
    {
        cout<<*it2<<' ';
    }

    return 0;
}
