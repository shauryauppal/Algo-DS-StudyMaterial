#include <bits/stdc++.h>
using namespace std;
void display(list <int>& LI)
{
    list <int> ::iterator it;
    for(it=LI.begin();it!=LI.end();it++)
    {
        cout<<*it<<' ';
    }
    cout<<'\n';
}
int main()
{
    list <int> LI;
    int n;
    cout<<"\nEnter number of elements to insert in BACK->";
    cin>>n;
    int x;
    cout<<"\nEnter list elements to insert at BACK->";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        //Inserting at end of link-list
        LI.push_back(x);
    }
    //display
    display(LI);
    cout<<"\nEnter number of elements to insert in FRONT->";
    cin>>n;
    cout<<"\nEnter elements to insert in FRONT->";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        LI.push_front(x);
    }
    display(LI);

    cout<<"\nAfter reversing->";
    reverse(LI.begin(),LI.end());
    display(LI);

    cout<<"\nO/p after removing front element->";
    LI.pop_front();
    display(LI);

    cout<<"\nO/p After removing last element->";
    LI.pop_back();
    display(LI);

    return 0;
}
