/*Yet another interesting algorithm is accumulate(...). If called for a vector of int-s and third parameter zero, accumulate(...) will return the sum of elements in vector:*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <float> v(5);
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    float sum=accumulate(v.begin(),v.end(),float(0));
    cout<<"Sum ->"<<sum<<'\n';
    //product of values in vector
    int product=accumulate(v.begin(),v.end(),double(1),multiplies<double>());
    cout<<"Product->"<<product;

    return 0;
}
