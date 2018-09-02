#include <bits/stdc++.h>
using namespace std;
bool compare(int i,int j)
{
    return i>j;
}
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    make_heap(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++)
        cout<<v[i]<<'\t';

        v.push_back(10);
        push_heap(v.begin(),v.end(),compare);
        cout<<'\n';
        cout<<"\nAfter push->";
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<'\t';

        pop_heap(v.begin(),v.end(),compare);//top element root is removed
        v.pop_back();
        cout<<'\n';
        cout<<"\nAter pop->";
    for(int i=0;i<n;i++)
        cout<<v[i]<<'\t';
   cout<<"\nHeap sort->";
   sort_heap(v.begin(),v.end(),compare);
   cout<<'\n';
   for(int i=0;i<n;i++)
        cout<<v[i]<<'\t';

    return 0;
}
