#include <cstdio>
#include <iostream>
using namespace std;

void sort(int a[],int n)
{
    int i,j,temp;
    for(int i=0;i<n;++i)
    {
        temp=a[i];
        for(j=i-1;temp<a[j]&&j>=0;--j)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
        cin>>a[i];
 sort(a,n);
for(int i=0;i<n;i++)
    printf("%d",a[i]);
return 0;
}
