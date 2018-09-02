#include <bits/stdc++.h>
using namespace std;

void computeZ(string S,int Z[])
{
    int k=0,lt=0,rt=0,L=S.length();
    for(k=0;k<L;k++)
    {
        if(k==0)
            Z[k]=L;

        else if(k>rt)
        {
            lt=rt=k;
            while(rt<L && S[rt-lt]==S[rt])
                rt++;
            Z[k]=rt-lt;
            rt--;
        }
        else
        {
            int p=k-lt;
            if(Z[p]<rt-k+1)
            {
                Z[k]=Z[p];
            }
            else
            {
                lt=k;
                while(rt<L && S[rt-lt]==S[rt])
                    rt++;
                Z[k]=rt-lt;
                rt--;
            }
        }
    }
}
void findpattern(string S,int M)
{
    int L=S.length();//length of contatenated long string
    int Z[L];//Z array values

    computeZ(S,Z);//fn call to compute Z values

    for(int i=0;i<L;i++)
    {
        if(Z[i]==M)//if Z values is equal to pattern length
            cout<<"\nPattern found at->"<<i-M-1;//i-M-1 is location of pattern in txt string i-M-1 is for pattern and $
    }
}
int main()
{
    string txt,pat,S;
    cout<<"Enter text string->";
    cin>>txt;//text input
    cout<<"\nEnter pattern string->";
    cin>>pat;//pattern input
    S=pat+'$'+txt;//concatenated combined string
    int M=pat.length();//pattern length

    findpattern(S,M);//fn call

    return 0;
}
