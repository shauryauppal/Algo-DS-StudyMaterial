#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ct=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;

         for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                printf("%d ", i);

            else // Otherwise print both
                printf("%d %d ", i, n/i);
        }
    }
    }
}

