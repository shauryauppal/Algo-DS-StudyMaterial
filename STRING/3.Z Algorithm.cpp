#include <bits/stdc++.h>
using namespace std;

void computeZ(string S,int Z[])
{
    int k=0,lt=0,rt=0,L=S.length();
    for(k=0;k<L;k++)
    {
        if(k==0)
            Z[k]=L;//Z[0] not in use

        else if(k>rt)//compare explicitly
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
            else//compare explicitly
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
/*//  Fills Z array for given string str[]
void getZarr(string str, int Z[])
{
    int n = str.length();
    int L, R, k;

    // [L,R] make a window which matches with prefix of s
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        // if i>R nothing matches so we will calculate.
        // Z[i] using naive way.
        if (i > R)
        {
            L = R = i;

            // R-L = 0 in starting, so it will start
            // checking from 0'th index. For example,
            // for "ababab" and i = 1, the value of R
            // remains 0 and Z[i] becomes 0. For string
            // "aaaaaa" and i = 1, Z[i] and R become 5
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            // k = i-L so k corresponds to number which
            // matches in [L,R] interval.
            k = i-L;

            // if Z[k] is less than remaining interval
            // then Z[i] will be equal to Z[k].
            // For example, str = "ababab", i = 3, R = 5
            // and L = 2
            if (Z[k] < R-i+1)
                 Z[i] = Z[k];

            // For example str = "aaaaaa" and i = 2, R is 5,
            // L is 0
            else
            {
                //  else start from R  and check manually
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}*/
