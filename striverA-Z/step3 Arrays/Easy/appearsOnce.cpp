// Write a function to return the element that appears once

#include <bits/stdc++.h>
using namespace std;

// Function for element that appears once
// Brute
int brute(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            return arr[i];
        }
    }
    return -1;
}

// Better
// using hashing

int betterHash(int arr[], int n)
{
    // first find the max element
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    // Declare hash array of size maxi+1 and hash the given array
    int hash[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // Now find the single element
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            return arr[i];
        }
    }

    return -1;
}

// using map
int betterMap(int arr[], int n)
{
    map<int, int> mp; // declare map
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // loop through map and return single element
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}

// Optimal using XOR
int optimal(int arr[], int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}

// main function
int main()
{
    int arr[5] = {1, 1, 2, 3, 3};
    int res1 = brute(arr, 5);
    int res2 = betterHash(arr, 5);
    int res3 = betterMap(arr, 5);
    int res4 = optimal(arr, 5);
    cout << "Element appears once: " << endl;
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    cout << res4 << endl;
    return 0;
}