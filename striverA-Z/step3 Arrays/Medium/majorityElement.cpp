// Write a function to return the element that appears more than n/2 times

#include <bits/stdc++.h>
using namespace std;

// Function for finding majority element
// Brute (using two loops)
int brute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        // check majority element
        if (count > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

// Better (using map)
int better(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // check majority element
    for (auto it : mp)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }
    return -1;
}

// optimal (using Moore's Voting Algorithm)
int optimal(int arr[], int n)
{
    int count = 0;
    int val;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            val = arr[i];
        }
        else if (arr[i] == val)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // check if that val is majority or not
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            count1++;
        }
    }
    if (count1 > n / 2)
    {
        return val;
    }
    return -1;
}

// main function
int main()
{
    int arr[7] = {1, 2, 3, 2, 2, 3, 2};
    int res1 = brute(arr, 7);
    int res2 = better(arr, 7);
    int res3 = optimal(arr, 7);
    cout << "Majority element is: " << endl;
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3;
    return 0;
}
