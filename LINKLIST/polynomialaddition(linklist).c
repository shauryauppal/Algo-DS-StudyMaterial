#include <stdio.h>
#include <stdlib.h>
struct node{int coef;
int exp;
struct node *next;}*ptr1,*ptr2,*ptr,*cur;
int insert_poly(struct node *top,int n,int pow)
{
    int ch,i;
    printf("Enter the no. of elements->");
        scanf("%d",&ch);
        for(i=0;i<ch;i++){
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->coef=n;
    ptr->exp=pow;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    else
        {
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=ptr;
        cur=ptr;}
    }

return top;
}
void display_poly(struct node *top)
{
    ptr=top;
     if(ptr==NULL)
        printf("LIST is empty");
     else
     {
     while(ptr!=NULL)
     {
         printf("%dX^%d",ptr->coef,ptr->exp);
         ptr=ptr->next;
     }
     }
}
void polyadd(struct node *top1,struct node *top2)
{
    struct node *top3=NULL;
     ptr1=top1;
     ptr2=top2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->exp>ptr2->exp)
        {
            top3=insert(top3,ptr1->coef,ptr1->exp);
            ptr1=ptr1->next;
        }
        else if(ptr1->exp<ptr2->exp)
        {
            top3=insert(top3,ptr2->coef,ptr2->exp);
            ptr2=ptr2->next;
        }
        else if(ptr1->exp==ptr2->exp)
        {
            top3=insert(top3,ptr1->coef+ptr2->coef,ptr1->exp);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
    while(ptr!=NULL)
    {
        top3=insert(top3,ptr1->coef,ptr1->exp);
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        top3=insert(top3,ptr2->coef,ptr2->exp);
        ptr2=ptr2->next;
    }
    printf("Added polynomial->");
    display(top3);
}
int main()
{
    struct node *top1=NULL,*top2=NULL;
    int n,pow,ch;
    char choi;
    do{printf("\n1.polynomial\n=>");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("\nEnter the element->");
            scanf("%d%d",&n,&pow);
            insert_poly(top1,n,pow);
        }
        else if(ch==2)
            display_poly();
        printf("\nDo u wanna contd(y/n)->");
        scanf(" %c",&choi);
    }while(choi=='y');
}

