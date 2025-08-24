// Write a function for longest subarray with sum k (positive)

#include <bits/stdc++.h>
using namespace std;

// Function for longest subarray sum
// Brute (using two pointer)
int brute(int arr[], int n, int k)
{
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = i; j < n; j++)
        {
            // calculate sum from i to j
            sum += arr[j];
            // check if sum is k
            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

// Better (using map)
int better(int arr[], int n, int k)
{
    map<long long, int> mp;
    int maxLen = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        // calculate prefix sum till i
        sum += arr[i];
        // check if sum is k
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        // calculate the sum of remaining part
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

// optimal (using sliding window)
int optimal(int arr[], int n, int k)
{
    int right = 0, left = 0;
    long long sum = 0;
    int maxLen = 0;
    while (right < n)
    {
        // Add current element to sum
        sum += arr[right];
        // if sum > k then we will move
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        // if sum is k update the maxLen
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        // if right is in bound keep adding
        right++;
    }
    return maxLen;
}

// main function
int main()
{
    int arr[5] = {2, 3, 5, 1, 9};
    int k = 10;
    int res1 = brute(arr, 5, k);
    int res2 = better(arr, 5, k);
    int res3 = optimal(arr, 5, k);
    cout << "Longest subarray with given sum: " << endl;
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    return 0;
}