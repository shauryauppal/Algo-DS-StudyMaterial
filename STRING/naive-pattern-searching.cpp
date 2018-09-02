#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int j,N=str1.length(),M=str2.length();

    for(int i=0;i<=N-M;i++)
    {
        //current index i,check for pattern
        for(j=0;j<M;j++)
        {
            if(str1[i+j]!=str2[j])
                break;
        }
            if(j==str2.length())
                cout<<"Pattern found at index->"<<i<<'\n';
    }
}
