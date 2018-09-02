#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,pat;
    cout<<"Enter the text string->";
    cin>>str;
    cout<<"\nPattern searching string->";
    cin>>pat;

    int l1=str.length(),l2=pat.length();
    for(int i=0;i<=l1-l2;i++)
    {
        int j;
        for(j=0;j<l2;j++)
        {
            if(str[i+j]!=pat[j])
                break;
        }
        if(j==l2)
            cout<<"\nPattern found at index->"<<i;
    }
    return 0;
}
