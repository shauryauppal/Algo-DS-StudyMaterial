#include <iostream>
#include <cstdio>
using namespace std;
class STOCK
{
    int icode;
    char name[30];
    int price;
    int qty;
int dis;
    void Disc()
    {
        if(qty<=50)
            dis=0;
        else if(qty<=100)
            dis=0.05*price;
        else if(qty>100)
        {
            dis=0.1*price;
        }
        //return dis;
    }
public:
    void getinfo()
    {
        cin>>icode>>name;
        cin>>price>>qty;
        Disc();
    }
    void display()
    {
        cout<<icode<<'\t'<<name<<'\t'<<price<<'\t'<<qty<<'\t'<<dis;
    }
} ;
int main()
{
    STOCK s;
    cout<<"\nEnter details\n=>";
    s.getinfo();
    cout<<"\nDetails are=> ";
    s.display();
    return 0;

}
