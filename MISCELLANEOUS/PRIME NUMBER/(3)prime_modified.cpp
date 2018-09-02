#include<iostream>
using namespace std;
int prime(int n)
{
    if(n<=1)
        return 0;//not prime
    if(n<=3)
        return 1;//prime
        if(n%2==0 || n%3==0)
            return 0;//not prime
        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
                return 0;
        }
        return 1;//prime
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;//To check whether this number is prime or not

    if(prime(n)==1)
        cout<<"prime true";
    else cout<<"Not prime";

    return 0;
}
