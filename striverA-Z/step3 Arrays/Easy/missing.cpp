// Write a function to return missing no from 0 to n

#include <bits/stdc++.h>
using namespace std;

// Function for missing no
// Brute
int brute(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int missing = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                missing = 1;
                break;
            }
        }
        if (missing == 0)
        {
            return i;
        }
    }
    return -1;
}

// Better using hashing
int better(int arr[], int n)
{
    int hash[n + 1] = {0}; // hash array

    // storing the frequencies:
    for (int i = 0; i < n - 1; i++)
        hash[arr[i]]++;

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

// Optimal (using sum and xor)
// sum
int sum(int arr[], int n)
{
    int sum = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];
    }

    return (sum - sum2);
}

// xor
int Xor(int arr[], int n)
{
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ arr[i];  // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR up to [1...n-1]
    }
    xor1 = xor1 ^ n; // XOR up to [1...N]

    return (xor1 ^ xor2);
}

// main function
int main()
{
    int arr[5] = {1, 2, 4, 5};
    int bruteRes = brute(arr, 5);
    int betterRes = better(arr, 5);
    int opSum = sum(arr, 5);
    int opXor = Xor(arr, 5);
    cout << "Missing no is: " << endl;
    cout << bruteRes << endl;
    cout << betterRes << endl;
    cout << opSum << endl;
    cout << opXor;
    return 0;
}