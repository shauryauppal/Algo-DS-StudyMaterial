#include <bits/stdc++.h>
using namespace std;
void compute_lps(string pat,int lps[],int M)
{
    int j=0,i=1;
    lps[0]=0;
    while(i<M)
    {
        if(pat[j]==pat[i])
        {
            j++;
            lps[i]=j;
            i++;
        }
        else//pat[i]!=pat[j]
        {
            if(j>0)
            {
                j=lps[j-1];
            }
            else//j==0
            {
                lps[i]=0;
                i++;
            }
        }
    }

    /*for(int i=0;i<M;i++)
    {
        cout<<lps[i]<<" ";
    }*/
}
void kmp_search(string txt,string pat)
{
    int N=txt.length(),M=pat.length();
    int lps[M];
    compute_lps(pat,lps,M);

    int i=0,j=0;
    while(i<N)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }

        if(j==M)
        {
            cout<<"String pattern found at->"<<i-j<<'\n';
            j=lps[j-1];
        }
        else if(i<N && txt[i]!=pat[j])
        {
            if(j>0)
            {
                j=lps[j-1];
            }
            else i++;
        }
    }
}
int main()
{
    string txt,pat;
    cout<<"\nEnter text string->";
    cin>>txt;
    cout<<"Enter pattern string->";
    cin>>pat;

    kmp_search(txt,pat);

    return 0;
}
