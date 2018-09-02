#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> M;
    M["hello"]=1;
    M["world"]=3;
    M["shaurya"]=10;
    int x=M["hello"]+M["world"];
    cout<<x<<'\n';

    if(M.find("shaurya")!=M.end())
    {
        M.erase("shauyra");
    }
    map<string,int> ::iterator it=M.begin();
    int r=0;
    for(;it!=M.end();it++)
    {
        r+=it->second;
    }
    cout<<r;
}
