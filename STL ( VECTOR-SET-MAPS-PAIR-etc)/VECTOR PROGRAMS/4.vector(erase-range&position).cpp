#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   vector<int> vec;
   int n,e;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>e;
       vec.push_back(e);//enter elements
   }
   int x;//position for which you wanna remove
   cin>>x;
   vector<int>::iterator v=vec.begin();
   vec.erase(v+x-1);
   int a,b;
   cin>>a>>b;//range you wanna delete
   vec.erase(v+a-1,v+b-1);
   cout<<vec.size()<<"\n";//size of vector after removing
   for(v=vec.begin();v!=vec.end();v++)
    cout<<*v<<" ";//printing of new vector after removing
}
