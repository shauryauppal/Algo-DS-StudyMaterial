#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class Distance
{
    int feet,inch;
public:
    friend ostream & operator <<(ostream & output,const Distance &);
    friend istream & operator>>(istream &input,Distance &);
};
ostream & operator <<(ostream & output,const Distance & d1)
{
    output<<d1.feet<<'\t'<<d1.inch;
    return output;
}
istream & operator >>(istream & input,Distance & d1)
{
    input>>d1.feet>>d1.inch;
    return input;
}
int main()
{
    Distance d1;
    cout<<"\nEnter details:";
    cin>>d1;
    cout<<"\nDetails are:";
    cout<<d1;
    return 0;
}
