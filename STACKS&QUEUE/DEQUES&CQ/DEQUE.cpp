//DEQUE PROGRAM or DOUBLE ENDED QUEUE
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int rear=-1,front=-1;
int size;
void insert_rear(int Q[],int item)
{
    if(rear==size-1)
        cout<<"Queue is full";
    else if(rear==-1)
    {
        front ++;
        Q[++rear]=item;
    }
    else
        Q[++rear]=item;
}
void insert_front(int Q[],int item)
{
    if(front==0)
        cout<<"Queue is full"<<'\n';
     else Q[--front]=item;
}
void delete_front(int Q[])
{
    if(front==-1)
        cout<<"Queue is empty"<<'\n';
    else if(front==rear)
    {
        cout<<"Element deleted ->"<<Q[front]<<'\n';
        front=rear=-1;
    }
    else
    {
        cout<<"Element deleted ->"<<Q[front]<<'\n';
        front++;
    }
}
void delete_rear(int Q[])
{
    if(front==rear+1)
        cout<<"Queue is empty";
    else
    {
        cout<<"Element deleted ->"<<Q[rear]<<'\n';
        rear--;
    }
}
void display(int Q[])
{
    for(int i=front;i<=rear;i++)
    {
        cout<<Q[i]<<'\n';
    }
}
int main()
{
    int ch,Q[100],item,n;
    char choi;
    cout<<"Enter size=>";
    cin>>size;
        cout<<"\nEnter options->";
    cout<<"\n1.Input Restricted Deque\n2.Output Restricted Deque\n=>";
    cin>>ch;
    system("cls");
    if(ch==1)
        {
            do{cout<<"\n1.Insertion from rear\n2.Deletion from front\n3.Deletion from rear\n4.Dislay\n=>";
            cin>>n;
            system("cls");
            if(n==1)
            {cout<<"Enter element you want to insert=>";
                cin>>item;
                insert_rear(Q,item);
            }
            else if(n==2)
            {
                delete_front(Q);
            }
            else if(n==3)
            {
                delete_rear(Q);
            }
            else if(n==4)
            display(Q);
            cout<<"\nDo you want to contd(y/n)";
            cin>>choi;
               }while(choi=='y');
        }
        if(ch==2)
        {
            do{cout<<"\n1.Insertion from rear\n2.Insertion from front\n3.Deletion from front\n4.Display\n=>";
            cin>>n;
            system("cls");
            if(n==1)
            {cout<<"Enter element you want to insert=>";
                cin>>item;
                insert_rear(Q,item);
            }
            else if(n==2)
            {cout<<"Enter element you want to insert=>";
                cin>>item;
                insert_front(Q,item);
            }
            else if(n==3)
            {
                delete_front(Q);
            }
            else if(n==4)
            display(Q);
            cout<<"\nDo you want to contd(y/n)";
            cin>>choi;
            }while(choi=='y');
        }
return 0;
}
