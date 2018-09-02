/*Q1: Define a class to represent a bank account. Include the following members:
Data members
1. Name of the depositor 2. Account number 3. Type of account 4. Balance amount in the account.
Member functions
1. To assign initial values 2. To deposit an amount 3. To withdraw an amount after checking the balance 4. To display name and balance
Write a main program to test the program.*/
/*Q2: Modify the class and the above program for handling 10 customers*/
//This question is done for single employee
//Q1 solved
/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
class Bank
{
    char name[30];
    int accno;
    char type[30];
    float balance;
public:
    void getinfo()
    {
        cout<<"\nEnter name->";cin>>name;
        cout<<"\nEnter account number->";cin>>accno;
        cout<<"\nEnter type of account->";cin>>type;
        cout<<"\nEnter balance in account->";cin>>balance;
    }
    void deposit(float x)
    {
        balance=balance+x;
    }
    void withdraw(float x)
    {
        //cout<<"\nPresent amount in account is->"<<balance;
        if(x>balance)
            cout<<"\nInvalid";
        else balance=balance-x;
    }
    void display()
    {
        cout<<"\nName->"<<name<<"\nFinal balance in account->"<<balance<<'\n';
    }
};
int main()
{
    Bank b;
    int ch;float x;
    char choi;
    cout<<"\nGet details of customer=>";
    b.getinfo();
    do
    {
        cout<<"\n1.Depoisit\n2.Withdraw\n3.Display\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter amount youwant to to deposit->";
            cin>>x;
            b.deposit(x);
        }
        else if(ch==2)
        {
            cout<<"\nAmount to withdraw->";
            cin>>x;
            b.withdraw(x);
        }
        else if(ch==3)
            b.display();
        cout<<"\nDo you want to contd(y/n)->";
        cin>>choi;
        cout<<'\n';
    }while(choi=='y');
    return 0;
}*/
//This question is done for N number of employees
//Q2 solved here
/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
class Bank
{
    char name[30];
    int accno;
    char type[30];
    float balance;
public:
    void getinfo()
    {
        cout<<"\nEnter name->";cin>>name;
        cout<<"\nEnter account number->";cin>>accno;
        cout<<"\nEnter type of account->";cin>>type;
        cout<<"\nEnter balance in account->";cin>>balance;
    }
    void deposit(float x)
    {
        balance=balance+x;
    }
    void withdraw(float x)
    {
        if(x>balance)
            cout<<"\nInvalid Insufficient balance";
        else balance=balance-x;
    }
    void display()
    {
        cout<<"\nName->"<<name<<"\nFinal balance in account->"<<balance<<'\n';
    }
    int accountno()
    {
        return accno;
    }
};
int main()
{
    int n,acc,k;
    cout<<"\nEnter number of customers of bank->";
    cin>>n;
    Bank b[n];
    int ch;float x;
    char choi;
    cout<<"\nGet details of "<<n<<" customers=>";
    for(int i=0;i<n;i++)
    b[i].getinfo();
    do
    {
        k=-1;
        cout<<"\nEnter your account for any operation number->";
        cin>>acc;
        for(int i=0;i<n;i++)
        {
            if(b[i].accountno()==acc)
            {
                k=i;
            }
        }
        if(k!=-1)
        {
        cout<<"\n1.Depoisit\n2.Withdraw\n3.Display\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter amount you want to to deposit->";
            cin>>x;
            b[k].deposit(x);
        }
        else if(ch==2)
        {
            cout<<"\nAmount to withdraw->";
            cin>>x;
            b[k].withdraw(x);
        }
        else if(ch==3)
            b[k].display();
        }
        if(k==-1)
            cout<<"\nINVALID ACCOUNT NUMBER NOT FOUND!!\n";
        cout<<"\nDo you want to contd(y/n)->";
        cin>>choi;
        cout<<'\n';
    }while(choi=='y');
    return 0;
}*/
/*Q7. You are the programmer for the home software company.
 You have been assigned to develop a class that models the basic working of a bank account.
  The class should perform the following tasks:
o Save the account balance.
 o Save the number of transaction performed on the account.
  o Allow deposits to be made to the account.
   o Allow withdrawals to be taken from the account.
    o Calculate interest for the period.
     o Report the current account balance at any time.
      o Report the current number of transaction at any time.
Design a C++ class with all types of constructors and a destructor.
 Your constructor and destructor definition should have appropriate message telling which type of constructor is invoked.
  Create global, local and static objects in your program and demonstrate the order of constructor and destructor calls.*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
class Bank
{
    char name[30];//name of account holder
    int accno;//account number
    char type[30];//savings account or current account
    float balance;//amount in account
    float interest;//interest rate
public:
    //constructor to initialize null and zero everything
    Bank()
    {
        cout<<"\n*Constructor invoked*\n";
        strcpy(name,"NULL");
        accno=0;
        strcpy(type,"NULL");
        balance=0;
        interest=0;
    }
    //destructor to give final balance at end
    ~Bank()
    {
        cout<<"\n*Destructor invoked*\n";
        cout<<"\nBalance after interest added->"<<balance+interest<<'\n';

    }
    //input function
    void getinfo()
    {
        cout<<"\nEnter name->";cin>>name;
        cout<<"\nEnter account number->";cin>>accno;
        cout<<"\nEnter type of account->";cin>>type;
        cout<<"\nEnter balance in account->";cin>>balance;
    }
    void deposit(float x)
    {
        balance=balance+x;
    }
    void withdraw(float x)
    {
        if(x>balance)
            cout<<"\nInvalid Insufficient balance";
        else balance=balance-x;
    }
    //NOT WORKING
    /*interest is shown as zero when program runs*/
    void check_interest()
    {
         if(balance<5000)
            interest=0;
        else if(balance<=10000 && balance>=5000)
            interest=balance*(10/100);
        else
            interest=balance*(20/100);
        cout<<"\nInterest is->"<<interest;
    }
    void display()
    {
        cout<<"\nName->"<<name<<"\nBalance before interest added->"<<balance<<'\n';
    }
    int accountno()
    {
        return accno;
    }
};
int main()
{
    int n,acc,k;
    cout<<"\nEnter number of customers of bank->";
    cin>>n;
    Bank b[n];
    int ch;float x;
    char choi;
    cout<<"\nGet details of "<<n<<" customers=>";
    for(int i=0;i<n;i++)
    b[i].getinfo();
    do
    {
        k=-1;
        cout<<"\nEnter your account for any operation number->";
        cin>>acc;
        for(int i=0;i<n;i++)
        {
            if(b[i].accountno()==acc)
            {
                k=i;
            }
        }
        if(k!=-1)
        {
        cout<<"\n1.Depoisit\n2.Withdraw\n3.Check interest\n4.Display\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter amount you want to to deposit->";
            cin>>x;
            b[k].deposit(x);
        }
        else if(ch==2)
        {
            cout<<"\nAmount to withdraw->";
            cin>>x;
            b[k].withdraw(x);
        }
        else if(ch==3)
        {
            b[k].check_interest();
        }
        else if(ch==4)
            b[k].display();
        }
        if(k==-1)
            cout<<"\nINVALID ACCOUNT NUMBER NOT FOUND!!\n";
        cout<<"\nDo you want to contd(y/n)->";
        cin>>choi;
        cout<<'\n';
    }while(choi=='y');
    return 0;
}
