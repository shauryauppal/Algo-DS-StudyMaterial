#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int top = -1;
char stack[SIZE];
void push(char item);
char pop();
int is_operator(char symbol);
int precedence(char symbol);
int main()
{
 int i=0,j=0;
 char infix_exp[SIZE], postfix_exp[SIZE],item,x;
 system("cls");
 printf("\nEnter Infix expression in parentheses: \n");
 gets(infix_exp);
 for(i=0;infix_exp[i]!='\0';i++)
 {item=infix_exp[i];
  if(item == '(')
  {
   push(item);
  }
  else if((item >= 'A'  && item <= 'Z') ||
  (item >= 'a' && item <= 'z'))
  {
   postfix_exp[j++] = item;
  }
 /* else if(is_operator(item) == 1)
  {
   x=pop();
   while(is_operator(x) == 1 && precedence(x)
    >= precedence(item))
   {
    postfix_exp[j++] = x;
    x = pop();
   }
   push(x);
   push(item);
  }
  else if(item == ')')
  {
   x = pop();
   while(x != '(')
   {
    postfix_exp[j++] = x;
    x = pop();
   }
  }
  else
  {
   printf("\nInvalid Arithmetic Expression.\n");
   exit(0);
  }*/
   else if(is_operator(item)==1)
        {
            x=pop();
              while(is_operator(x)== 1 && (precedence(x)>=precedence(item)))
              {
                  postfix_exp[j++]=x;
                  x=pop();
              }
              push(x);
              push(item);
        }
        else if(item==')')
        {
            x=pop();
            while(x !='(')
            {
                postfix_exp[j++]=x;
                x=pop();
            }
        }
else exit(0);
        }
  postfix_exp[j++] = '\0';
  printf("\nArithmetic expression in Postfix notation: ");
  puts(postfix_exp);

}
void push(char item)
{
 if(top == SIZE-1)
 {
  printf("\nStack Overflow. Push not possible.\n");
 }
 else
 {
top++;
  stack[top] = item;
 }
}
char pop()
{
 char item = NULL;
 if(top <= -1)
 {
  printf("\nStack Underflow. Pop not possible.\n");
 }
 else
 {
  item = stack[top];
  stack[top] = NULL;
  top = top-1;
 }
 return(item);
}
int is_operator(char symbol)
{
 if(symbol == '^' || symbol == '*' || symbol == '/' ||
 symbol == '+' || symbol == '-')
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int precedence(char symbol)
{
 if(symbol == '^')
 {
  return(3);
 }
 else if(symbol == '*' || symbol == '/')
 {
  return(2);
 }
 else if(symbol == '+' || symbol == '-')
 {
  return(1);
 }
 else
 {
  return(0);
 }
}
