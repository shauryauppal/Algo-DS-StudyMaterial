#include <bits/stdc++.h>
using namespace std;
int main()
{

    int A[]= {1,2,3,4,5} ;
    string result;
     //convert array to string
    for(int i=0;i<5;i++)
    {stringstream convert;
    convert << A[i];
    result+=convert.str();
    }
    result=result+"434";

    //convert back to integer
    int X;
    stringstream ss(result);
    ss>>X;
    cout<<X;

    return 0;
}
