#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class complex
{
    int real,img;
public:
    complex()
    {

    }
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    void show()
    {
        cout<<'\n'<<real<<"+j"<<img<<'\n';
    }
    friend complex operator +(complex,complex);
};
complex operator +(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    complex c1(5,10);
    complex c2(2,5);
    complex c3;
    c1.show();
    c2.show();
    c3=c1+c2;
    c3.show();
    return 0;
}
