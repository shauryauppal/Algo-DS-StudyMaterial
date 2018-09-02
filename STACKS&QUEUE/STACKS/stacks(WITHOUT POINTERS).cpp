#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 10
int top=-1;
using namespace std;
void push(int a[],/*int &top,*/int data)
{
    if(top==size-1)
        cout<<"stack is full";
    else{top++;
            a[top]=data;}
}
int pop(int a[]/*,int &top*/)
{
    if(top==-1)
        cout<<"\nstack is empty";
    else{int data=a[top];
    top--;
    return data;}

}
void display(int a[]/*,int &top*/)
{if(top==-1)
cout<<"stack is empty";
    for(int i=0;i<=top;i++)
        cout<<a[i]<<endl;
}
int main()
{
    //int top=-1;
    int ch,a[size],data;
    char choi;
    do{cout<<("ENTER OPTION->");
    cout<<("\n1.PUSH");
    cout<<("\n2.POP");
    cout<<("\n3.DISPLAY\n=>");
            cin>>ch;
            system("cls");
            if(ch==1)
            {
               cout<<"Enter data you want to push=>";
               cin>>data;
               push(a/*,top,*/,data);

            }
            else if(ch==2)
            {
                pop(a);
            }
            else if(ch==3)
                display(a);

            cout<<"\nDo you want to contd(y/n)->";
            scanf(" %c",&choi);
       }while(choi=='y');
return 0;
}
