/*
An unordered_map in STL is a container that stores unique elements in the form of key-value pairs.
Unlike a map, the keys are not ordered in any specific way.
Operations on an unordered_map (like insert, find, erase) take O(1) time on average.

Syntax:
unordered_map<key_type, value_type> variable_name;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaring an unordered_map with int keys and int values
    unordered_map<int, int> ump;

    // inserting key-value pairs into the unordered_map
    for (int i = 1; i <= 5; i++)
    {
        ump[i] = i * 10; // key i and value i*10
    }

    cout << "Elements in unordered_map (key-value pairs):\n";
    for (auto it = ump.begin(); it != ump.end(); it++)
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Accessing a value using the key
    int key = 3;
    if (ump.find(key) != ump.end())
    {
        cout << "The value associated with key " << key << " is: " << ump[key] << endl;
    }

    // Deleting an element using key
    ump.erase(2);
    cout << "Elements after erasing key 2:\n";
    for (auto it = ump.begin(); it != ump.end(); it++)
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Size of the unordered_map
    cout << "Size of the unordered_map: " << ump.size() << endl;

    if (ump.empty())
        cout << "unordered_map is empty" << endl;
    else
        cout << "unordered_map is not empty" << endl;

    // Clearing the unordered_map
    ump.clear();
    cout << "Size of the unordered_map after clearing all elements: " << ump.size() << endl;
}
