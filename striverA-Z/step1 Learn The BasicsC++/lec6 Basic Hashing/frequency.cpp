// Given an array, we have found the number of occurrences of each element in the array.

#include <bits/stdc++.h>
using namespace std;

// Function to find frequency

void frequency(int arr[], int n)
{
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Frequency of each elements: " << endl;
    frequency(arr, 5);
    return 0;
}