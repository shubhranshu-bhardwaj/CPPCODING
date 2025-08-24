// Write a function for longest subarray with sum k (positive + negative)

#include <bits/stdc++.h>
using namespace std;

// Function for longest subarray
// Better (using two pointer)
int better(int arr[], int n, int k)
{
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = i; j < n; j++)
        {
            // calculate sum i - j
            sum += arr[j];
            // if sum is k update the maxLen
            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

// Optimal (using map)
int optimal(int arr[], int n, int k)
{
    int maxLen = 0;
    long long sum = 0;
    map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        // calculate sum till i
        sum += arr[i];
        // if sum is k then update maxLen
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        // calculate remaining part
        long long rem = sum - k;
        // calculate and update the length
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }

        // update the map checking condition
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    return maxLen;
}

// main function
int main()
{
    int arr[3] = {-1, 1, 1};
    int k = 1;
    int res1 = better(arr, 3, k);
    int res2 = optimal(arr, 3, k);
    cout << "Longest subarray with given sum: " << endl;
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}