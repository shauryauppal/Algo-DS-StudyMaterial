#include <bits/stdc++.h>
using namespace std;
struct node
{
    string name;
    int age;
    node *nextname;
    node *nextage;
}*top=NULL,*cur=NULL,*ptr=NULL;
void insert(string nm,int n)
{
    ptr=new node;
    ptr->name=nm;
    ptr->age=n;
    ptr->nextname=NULL;
    ptr->nextage=NULL;

    if(top==NULL)
    {
        top=cur=ptr;
    }
    else
    {
        cur->nextname=ptr;
        cur->nextage=ptr;
        cur=ptr;
    }
}
void display_name()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<"\nName->"<<ptr->name;
        cout<<"\nAge->"<<ptr->age;
        ptr=ptr->nextname;
    }
}
void display_age()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<"\nName->"<<ptr->name;
        cout<<"\nAge->"<<ptr->age;
        ptr=ptr->nextage;
    }
}
void sort_name()
{
    node *ptr1,*ptr2;
     ptr1=top;
    ptr2=top;
    while(ptr1!=NULL)
    {
    ptr2=ptr1;
    while(ptr2!=NULL)
    {
        if(ptr1->name>ptr2->name)
        {
            swap(ptr1->name,ptr2->name);
            swap(ptr1->age,ptr2->age);
        }
        ptr2=ptr2->nextname;
    }
        ptr1=ptr1->nextname;
    }
}

void sort_age()
{
    node *ptr1,*ptr2;
    ptr1=top;
    ptr2=top;
    while(ptr1!=NULL)
    {ptr2=ptr1;
    while(ptr2!=NULL)
    {
        if(ptr1->age>ptr2->age)
        {
            swap(ptr1->name,ptr2->name);
            swap(ptr1->age,ptr2->age);
        }
        ptr2=ptr2->nextage;
        }
        ptr1=ptr1->nextage;
    }
}
int main()
{
    int ch;
    char choi;
    string name;
    int age;
    do
    {
        cout<<"\n1.Insert node\n2.Sort by name\n3.Sort by age\n4.Exit\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter name & age=>";
            cin>>name>>age;
            insert(name,age);
        }
        else if(ch==2)
        {
            sort_name();
            display_name();
        }
        else if(ch==3)
        {
            sort_age();
            display_age();
        }
        else if(ch==4)
        {
            exit(0);
        }
        cout<<"\nDo u want to contd(y/n)=>";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
