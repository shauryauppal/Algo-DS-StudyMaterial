#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[100];//array
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector <int>vec(a,a+n);//array elements data assign to vector from 0 to n (number of elements)
    vector <int>::iterator v;
    for(v=vec.begin();v!=vec.end();v++)
        cout<<*v<<"\t";//printing before erasing
    v=find(vec.begin(),vec.end(),4);
    vec.erase(v);
    cout<<"\nNEW ELEMENTS=>\n";
    for(v=vec.begin();v!=vec.end();v++)
        cout<<*v<<"\t";//print vector
       /* int x;
        cin>>x;
        vec.erase(vec.begin()+x);
    cout<<"\nNEW ELEMENTS=>\n";
    for(v=vec.begin();v!=vec.end();v++)
     cout<<*v<<"\t";*/
}
