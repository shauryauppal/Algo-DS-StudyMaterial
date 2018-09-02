#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c,k,w;
    for(int i=0;i<t;i++)
    {
        cin>>c>>k>>w;
        if(c*w<=k)
            cout<<"yes\n";
        else cout<<"no";
    }
}
