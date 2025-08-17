// Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

#include <bits/stdc++.h>
using namespace std;

// Function to find highest & lowest element

void frequency(int arr[], int n)
{

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxElement = -1, minElement = -1;

    // Find element with max and min frequency
    for (auto it : mp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxElement = it.first;
        }

        if (it.second < minFreq)
        {
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "The highest frequency element is: " << maxElement << endl;
    cout << "The lowest frequency element is: " << minElement << endl;
}

int main()
{
    int arr[6] = {10, 5, 10, 15, 10, 5};
    frequency(arr, 6);
    return 0;
}