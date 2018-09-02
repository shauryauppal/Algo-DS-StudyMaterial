#include <bits/stdc++.h>
using namespace std;
/*int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"\nLcm->";
    for(int i=1;i<=a*b;i++)
        if(i%a==0 && i%b==0)
    {
        cout<<i;
        break;
    }
}*/

//METHOD 2
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"\nGCD->"<<gcd(a,b);
    cout<<"\nLCM->"<<lcm(a,b);
    return 0;
}
