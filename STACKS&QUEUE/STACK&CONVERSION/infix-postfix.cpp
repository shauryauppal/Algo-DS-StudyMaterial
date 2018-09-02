/*convert infix expression to postfix expression using stack*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int top=-1;
char stack[SIZE];
void push(char item);
char pop();
int is_operator(char);
int precedence(char);
int main()
{
    int i=0,j=0;
    char x,item,postfix[SIZE],infix[SIZE];
    printf("Enter infix expression with parenthesis=>");
    gets(infix);
    for(i=0;infix[i]!='\0';i++)
    {
        item=infix[i];
        if(item=='(')
            push(item);
        else if((item>='a' && item<='z')||(item>='A' && item<='Z'))
            postfix[j++]=item;
        else if(is_operator(item)==1)
        {
            x=pop();
              while(is_operator(x)==1 && precedence(x)>=precedence(item))
              {
                  postfix[j++]=x;
                  x=pop();
              }
              push(x);
              push(item);
        }
        else if(item==')')
        {
            x=pop();
            while(x!='(')
            {
                postfix[j++]=x;
                x=pop();
            }
        }
else exit(0);
        }
        postfix[j++]='\0';
        printf("postfix expression is\n=>");
        puts(postfix);

    return 0;
}
void push(char item)
{
    if(top==SIZE-1)
        printf("stack full");
    else{ top++;
            stack[top]=item;
}
}
char pop()
{char item=NULL;
    if(top==-1)
        printf("stack is empty");
    else {item=stack[top];
    stack[top]=NULL;
    top--;}
    return item;
}
int is_operator(char symbol)
{
    if(symbol=='^' || symbol=='*' || symbol=='/' || symbol=='+' || symbol=='-')
return 1;
else return 0;
}
int precedence(char symbol)
{
    if(symbol=='^')
        return 3;
    else if(symbol=='*' || symbol=='/')
        return 2;
    else if(symbol=='+' || symbol=='-')
        return 1;
    else return 0;
}
