//iterator through a vector.
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> vect;
    for (int nCount=0; nCount < 6; nCount++)
        vect.push_back(nCount);
    vector<int>::const_iterator it; // declare an read-only iterator
    it = vect.begin(); // assign it to the start of the vector
    while (it != vect.end()) // while it hasn't reach the end
    {
        cout << *it << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }
    cout << endl;
    return 0;
}
