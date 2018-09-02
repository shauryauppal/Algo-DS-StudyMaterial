#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#define size 10
typedef struct
   {int item[size];
             int top;}STACK;
void push(STACK *ptr,int data)
{
    if(ptr->top==size-1)
        cout<<"STACK IS FULL!!";
    else{ptr->top++;
    ptr->item[ptr->top]=data;}
}
void pop(STACK * ptr)
{
    if(ptr->top==-1)
        cout<<("STACK IS EMPTY!!");
    else{ int data=ptr->item[ptr->top];
    ptr->top--;}
}
void display(STACK *ptr)
{
    if(ptr->top==-1)
        cout<<("STACK IS EMPTY!!!!");
    int i;
    for(i=0;i<=ptr->top;i++)
        cout<<(ptr->item[i])<<endl;
}
int main()
{      STACK s;
     s.top=-1;
    int ch,data;
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
               push(&s,data);

            }
            else if(ch==2)
            {
                pop(&s);
            }
            else if(ch==3)
                display(&s);

            cout<<"\nDo you want to contd(y/n)->";
            scanf(" %c",&choi);
       }while(choi=='y');
return 0;
}

