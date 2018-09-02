#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> v;
    string x;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    do
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<'\n';
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}
