#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;
int main()
{
    char a[10000],b[10000];
    cout<<"ENTER STRING 1st(A) THEN ENTER STRING 2nd (B)=>\n";
    gets(a);
    gets(b);
    char c[10000];
    int l1=strlen(a),l2=strlen(b);
    cout<<"\n\nLength of string one is=>"<<l1<<"\n\nThe length of string two is"<<l2;
    /*for(int i=0;a[i]!='\0';i++)
        a[i]=toupper(a[i]);//METHOD 1 FOR UPPER CASE OF STRING
    cout<<endl<<a;*/
    strupr(a);//METHOD 2 FOR STRING UPPERCASE CONVERTION
    cout<<endl<<endl<<a;
    strlwr(b);//ASSUME IF B IS UPPER CASE WE CAN CONVERT IT BY
    cout<<endl<<endl<<b<<endl;
    /*CHECK WHETHER A CHACRACTER IN ASTRING IS UPPERCASE OR LOWERCASE*/
//USE ISLOWER AND ISUPPER
cout<<"\nConcatenated string is =>"<<strcat(a,b)<<endl<<endl;
/*when string contanenation is used the string gets concatenated i.e join and the DATA OF STRING(A) AND STRING(B) GETS STORED IN STRING(A) CONCATENATED DATA*/
cout<<a;//IT WILL GIVE ME CONCATENATED OF STRING(A) AND STRING(B)
cout<<"\n\nEnter third string(c)=>\n";
gets(c);
strncat(a,c,5);
cout<<"\nThe concatenated data by strncat is=>\n"<<a<<endl;
/*strcpy(a,b) says that data of b gets overwritten on data od a*/
cout<<"\n\nReverse of third string(c)=>\n"<<strrev(c);//reverse the string
cout<<strdup(a,b);
/*for more details checkout this picture saved in study material folder*/
}
