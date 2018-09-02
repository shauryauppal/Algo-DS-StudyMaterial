#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str,str1;
  int x;
  cin>>str>>str1;
  stringstream s(str);
  if(!(s >> x))
    x=0;
  cout<<x+5;
    return 0;
}
