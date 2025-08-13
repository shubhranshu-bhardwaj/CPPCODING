/*
An unordered set in STL is a container that stores unique elements in no particular order. 
Every operation on an unordered set takes O(1) complexity in the average case and takes 
O(n) in the worst case.
Syntax:
unordered_set<object_type> variable_name;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> st;

    // inserting elements in set
    for (int i = 1; i <= 10; i++)
    {
        st.insert(i);
    }

    cout << "Printing elements of set: ";
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int n = 5;
    if (st.find(n) != st.end())
    {
        cout << n << " is present in set" << endl;
    }

    st.erase(st.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "The size of the set is: " << st.size() << endl;

    if (st.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;
    st.clear();
    cout << "Size of the set after clearing all the elements: " << st.size();
}