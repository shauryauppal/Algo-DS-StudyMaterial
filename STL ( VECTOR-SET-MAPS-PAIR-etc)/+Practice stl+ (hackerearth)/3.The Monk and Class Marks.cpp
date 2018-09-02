#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL)
using namespace std;
bool compare(const pair < int,string > &a ,const pair<int,string> &b )
              {

                  if(a.first==b.first)
                  {
                      return a.second>b.second;
                  }

                  return a.first<b.first;
              }
int main()
{
    fastIO;
    vector< pair <int , string> > mp;
    int n,x;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        cin>>x;
        mp.push_back(make_pair(x,str));
    }
    sort(mp.rbegin(),mp.rend(),compare);

    vector< pair <int,string> > ::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second<<' '<<it->first<<'\n';
    }

    return 0;
}
