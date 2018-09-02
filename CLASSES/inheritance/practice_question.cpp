/*Assume that the test results of a batch of students are stored in three different classes.
Class student stores the roll number, (Input & display roll no)
Class test stores the marks obtained in two subjects (Input & display Marks)
Class result contains the total marks obtained in the test. ( Display rollno, Marks and total Marks)

The class result can inherit the details of the marks obtained in the test and the roll-number of students through multilevel inheritance.
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class student
{
    int rno;
public:
    void getrno()
    {
        cout<<"\nEnter roll no->";
        cin>>rno;
    }
    void displayrno()
    {
        cout<<"\nStudent roll no.->";
        cout<<rno;
    }
};
class testscore:public student
{

   public:
       int m1,m2;
       void getmarks()
       {
           cout<<"\nEnter marks in two subject->";
           cin>>m1>>m2;
       }
       void displaymarks()
       {
           cout<<"\nMarks are->"<<m1<<'\t'<<m2;
       }
};
class result:public testscore
{
    int totalmarks;
public:
    void displaytotal()
    {
        totalmarks=m1+m2;
        cout<<"\nTotal->"<<totalmarks;
    }
};
int main()
{
    result r;
    r.getrno();
    r.getmarks();
    r.displayrno();
    r.displaymarks();
    r.displaytotal();
    return 0;
}
