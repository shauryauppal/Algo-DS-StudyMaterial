#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left,*right;
}node;
void insert(node*,node*);
void print(node*);
int height(node*);
int main()
{
    char ch='y';
    node *root,*new;
    root=NULL;
    while(ch=='y')
    {
        new=(node*)malloc(sizeof(node));
        scanf("%d",&(new->data));
        new->left=NULL;
        new->right=NULL;
        if(root==NULL)
            root=new;
        else
            insert(root,new);
        printf("\nWant to enter more :");
        fflush(stdin);
        scanf("%c",&ch);
    }
    printf("\nThe height is :%d",height(root));
    return 0;
}
void insert(node *head,node *new)
{
    char choice;
    fflush(stdin);
    printf("Right or left:");
    scanf("%c",&choice);
    if(choice=='r')
    {
        if(head->right==NULL)
            head->right=new;
        else
            insert(head->right,new);
    }
    else
    {
        if(head->left==NULL)
            head->left=new;
        else
            insert(head->left,new);
    }
}
int height(node *t)
{
    int c=1,c1=1;
    if(t->left!=NULL)
        c+=height(t->left);
    if(t->right!=NULL)
        c1+=height(t->right);
    return (c>c1)?(c):(c1);
}
