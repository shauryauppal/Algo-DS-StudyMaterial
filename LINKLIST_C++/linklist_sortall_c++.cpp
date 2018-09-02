#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*top=NULL,*cur=NULL,*ptr=NULL;
void insert(int n)
{
    ptr=new node;
    ptr->data=n;
    ptr->next=NULL;

    if(top==NULL)
    {
        top=cur=ptr;
    }
    else
    {
        cur->next=ptr;
        cur=ptr;
    }
}
//bubble sort algo used
void sort_bubble()
{
    //ptr1 is consider as i and ptr2 as j
    node *ptr1,*ptr2;
    ptr1=top;
    ptr2=top;
    //i ka loop
    while(ptr1!=NULL)
    {
        ptr2=top;
        //j ka loop
        while(ptr2->next!=NULL)
        {
            //comparison
            if(ptr2->data>ptr2->next->data)
            {
                swap(ptr2->data,ptr2->next->data);
            /*
            int temp=ptr2->data;
            ptr2->data=ptr2->next->data;
            ptr2->next->data=temp;*/
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }

}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    int ch;
    char choi;
    int n;
    do
    {
        cout<<"\n1.Insert\n2.Sort bubble\n3.Display\n4.Exit=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter data";
            cin>>n;
            insert(n);
        }
        else if(ch==2)
        {
            sort_bubble();
            display();
        }
        else if(ch==3)
        {
            display();
        }
        else exit(0);

        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
