//iterator through a vector.
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> vect;
    for (int nCount=0; nCount < 6; nCount++)
        vect.push_back(nCount);
    vector<int>::iterator fo;
    vector<int>::reverse_iterator it=vect.rbegin(); // declare an to print the vector in reverse form
    fo=vect.begin(); // assign it to the start of the vector forward from
    while (it != vect.rend()) // while it hasn't reach the end
    {
        cout << *it << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }
    cout << endl;
    while(fo!=vect.end())
    {
        cout<<*fo<<" ";
        fo++;
    }
    cout<<"\n Now to delete the vector.\n";
    vect.erase(vect.begin(),vect.begin()+2);//erase is always used with vectors not passed to iterators.
    cout << endl;
    fo=vect.begin();
    while(fo!=vect.end())
    {
        cout<<*fo<<" ";
        fo++;
    }
    /*cout<<"\n now popping out the last element: ";
    vect.pop_back();//to delete the last element.
    cout << endl;
    fo=vect.begin();
    while(fo!=vect.end())
    {
        cout<<*fo<<" ";
        fo++;
    }*/
    return 0;
}
