/*
Vectors in STL are basically dynamic arrays that have the ability to change size whenever
elements are added or deleted from them. Vector elements can be easily accessed and traversed
using iterators.
A vector stores elements in contiguous memory locations.
Syntax:
vector<object_type> variable_name;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaring vector
    vector<int> vec;

    // inserting some value in vector
    for (int i = 1; i <= 10; i++)
    {
        vec.push_back(i);
    }

    // printing value
    cout << "Elements in vector:";
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Front element of vector: " << vec.front() << endl;
    cout << "Last element of vector: " << vec.back() << endl;
    cout << "Size of vector: " << vec.size() << endl;
    cout << "Deleting an element from the end: " << vec[vec.size() - 1] << endl;
    vec.pop_back();

    cout << "Elements after deleting:";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Inserting 15 at the beginning:" << endl;
    vec.insert(vec.begin(), 15);
    cout << "Now the first element is: " << vec[0] << endl;
    cout << "Erasing the first element" << endl;
    vec.erase(vec.begin());
    cout << "Now the first element is: " << vec[0] << endl;

    if (vec.empty())
        cout << "vector is empty";
    else
        cout << "vector is not empty" << endl;

    vec.clear();
    cout << "Size of the vector after clearing the vector: " << vec.size();
}