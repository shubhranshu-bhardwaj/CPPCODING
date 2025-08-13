/*
A map in STL is a container that stores unique elements in the form of key-value pairs.
In a map, the keys are sorted in ascending order by default.
Every operation on a map (like insert, find, erase) takes O(log n) time complexity.

Syntax:
map<key_type, value_type> variable_name;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaring a map with int keys and int values
    map<int, int> mp;

    // inserting key-value pairs into the map
    for (int i = 1; i <= 5; i++)
    {
        mp[i] = i * 10; // key i and value i*10
    }

    cout << "Elements in map (key-value pairs):\n";
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Accessing a value using the key
    int key = 3;
    if (mp.find(key) != mp.end())
    {
        cout << "The value associated with key " << key << " is: " << mp[key] << endl;
    }

    // Deleting an element using key
    mp.erase(2);
    cout << "Elements after erasing key 2:\n";
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Size of the map
    cout << "Size of the map: " << mp.size() << endl;

    if (mp.empty())
        cout << "Map is empty" << endl;
    else
        cout << "Map is not empty" << endl;

    // Clearing the map
    mp.clear();
    cout << "Size of the map after clearing all elements: " << mp.size() << endl;
}
