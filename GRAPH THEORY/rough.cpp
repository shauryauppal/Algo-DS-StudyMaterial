#include <bits/stdc++.h>
using namespace std;
int n,S,totalpossibleleft=0;
vector <int> sol;
int W[100];
bool isSafe(int i,int weightsofar,int totalpossibleleft)
{
    if( (weightsofar+totalpossibleleft>=S) && (weightsofar==S || weightsofar+W[i+1]<=S))
        return true;

    return false;
}
bool SumSubset(int i,int weightsofar,int totalpossibleleft)
{
    if(weightsofar==S)
    {
        //printsolution
        for(int i=0;i<sol.size();i++)
            cout<<sol[i]<<' ';
        exit(0);
    }
    if(isSafe(i,weightsofar,totalpossibleleft))
    {
        sol.push_back(W[i]);
        weightsofar+=W[i];
        totalpossibleleft-=W[i];

        if(SumSubset(i+1,weightsofar,totalpossibleleft))
            return true;

        sol.pop_back();
        weightsofar-=W[i];
        totalpossibleleft+=W[i];

    }
    return false;

}
int main()
{
    cin>>n>>S;

    for(int i=0;i<n;i++)
    {
        cin>>W[i];
        totalpossibleleft+=W[i];
    }
    SumSubset(0,0,totalpossibleleft);
    return 0;
}
