#include <iostream>
#include <cstdio>
using namespace std;
//give act as a virtual class
class give
{
    //protected members
   protected:
   int width,height;
   public:
       //pure virtual function used
    virtual int getarea()=0;
    //use to get data
    void getheight()
    {
        cout<<"\nEnter height->";
        cin>>height;
    }
    //used to get data
    void getwidth()
    {
        cout<<"\nEnter width->";
        cin>>width;
    }
};
//derived class visibility public
class rectangle:public give
{
    public:
    int getarea()
    {
        return (height*width);
    }
};
//derived class
class triangle:public give
{
    public:
    int getarea()
    {
        return ((height*width)/2);
    }
};
int main()
{
    rectangle r;
    r.getheight();
    r.getwidth();
    cout<<"\nRectange area->"<<r.getarea();
    triangle t;
    t.getheight();
    t.getwidth();
    cout<<"\nTriangle area->"<<t.getarea();
    return 0;
}
