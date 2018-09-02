/*Create a class called Distance with member variables feet and inches. Give the required constructor and getter and setter functions.
a) Overload the unary minus operator. store the result in a distance object.
b)relational < operator to check whether dist1 is less than dist2.
c) binary + operator to add two distances
d) overload the assignment operator
e) overload the == operator.
f)prefix increment and postfix increment operator.
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class Distance
{
    int feet,inch;
public:
    Distance()
    {

    }
    void getvalue()
    {
        cout<<"\nEnter feet->";
        cin>>feet;
        cout<<"\nEnter inch->";
        cin>>inch;
    }
    void show()
    {
        cout<<'\n'<<"Feet->"<<feet<<"Inch->"<<inch<<'\n';
    }
    void operator-()
    {
        feet=-feet;
        inch=-inch;
    }
    friend int operator<(Distance,Distance);
    friend  Distance operator+(Distance,Distance);
    //friend void operator =(Distance,Distance);
    friend int operator==(Distance,Distance);
    friend Distance operator++(Distance);
};
Distance operator++(Distance d1)
{
    Distance temp;
    temp.feet=++d1.feet;
    temp.inch=++d1.inch;
    return temp;
}
int operator ==(Distance d1,Distance d2)
{
    if(d1.feet==d2.feet && d1.inch==d2.inch)
    {
        return 1;
    }
    else return 0;
}
/*void operator =(Distance d1,Distance d2)
{
    d1.feet=d2.feet;
    d1.inch=d2.inch;
}*/
int operator<(Distance d1,Distance d2)
{
    if(d1.feet<d2.feet ||((d1.feet==d2.feet) && (d1.inch<d2.inch)))
        return 1;
    else return 0;
}
Distance operator+(Distance d1,Distance d2)
{
    Distance temp;
    temp.feet=d1.feet+d2.feet;
    temp.inch=d1.inch+d2.inch;
    return temp;
}
int main()
{
    Distance d1,d2,d3;
    int ch;
    char choi;
    d1.getvalue();
    d2.getvalue();
    d1.show();
    d2.show();
    do
    {
        cout<<"\n1. Overload the unary minus operator. store the result in a distance object.\n2.Relational < operator to check whether dist1 is less than dist2.\n3. binary + operator to add two distances\n4. overload the assignment operator\n5. overload the == operator.\n6.prefix increment and postfix increment operator.\n->";
        cin>>ch;
        if(ch==1)
        {
            -d1;
            d1.show();
        }
        else if(ch==2)
        {
            if(d1<d2)
            cout<<"\nD1 is less than D2";
            else
            cout<<"\nD1 is greater";
        }
        else if(ch==3)
        {
            d3=d1+d2;
            cout<<"\nAddtion is->\n";
            d3.show();
        }
        else if(ch==4)
        {
            d1=d2;
            d1.show();
        }
        else if(ch==5)
        {
          if(d1==d2)
                cout<<"\nEqual";
          else cout<<"\nNot equal";
        }
        else if(ch==6)
        {
            d3=++d1;
            cout<<"\nIncrement->\n";
            d3.show();
        }
   cout<<"\nDo you wanna contd(y/n)=>";
   cin>>choi;
    }while(choi=='y');
    return 0;
}
