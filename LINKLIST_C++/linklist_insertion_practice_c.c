#include <stdio.h>
#include <stdlib.h>
struct node
{
  int info;
  struct node *next;
}*top=NULL,*ptr,*cur;
void push_begin(int n)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;

    if(top==NULL)
    {
         top=ptr;
         cur=top;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
}
void push_end(int n)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
        cur=ptr;
    }
    else
    {
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=ptr;
            cur=ptr;
    }
}
void push_mid(int n,int pos)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;

    if(top==NULL)
    {
        top=ptr;
        cur=ptr;
    }
    else
    {
        int i=1;
        cur=top;
        while(i+1!=pos)
        {
            cur=cur->next;
            i++;
        }
        ptr->next=cur->next;
        cur->next=ptr;
    }
}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->info);
        ptr=ptr->next;
    }
}
int main()
{
    int n;
    int ch;
    char choi;
    do
    {
        printf("\n1.Insert data in beginning\n2.Insert data in end\n3.Insert data in middle\n4.Display\n5.Exit\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("\nEnter data->");
            scanf("%d",&n);
            push_begin(n);
        }
        else if(ch==2)
        {
            printf("\nEnter data->");
            scanf("%d",&n);
            push_end(n);
        }
        else if(ch==3)
        {
            int pos;
            printf("\nEnter data and position->");
            scanf("%d%d",&n,&pos);
            push_mid(n,pos);
        }
        else if(ch==4)
        {
            display();
        }
        else if(ch==5)
        {
            exit(0);
        }
        printf("\nDo you want to contd(y/n)=>");
        scanf(" %c",&choi);
    }while(choi=='y');

    return 0;
}
