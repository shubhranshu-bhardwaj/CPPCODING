// Write a function to return the maximum subarray sum

#include <bits/stdc++.h>
using namespace std;

// Function for subarray sum
// Better (using two loop)
int better(int arr[], int n)
{
    int maxSum = 0;
    // Outer loop
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        // inner loop
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

// Optimal (Using Kadane's Algorithm)
int optimal(int arr[], int n)
{
    int maxSum = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

// main function
int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int res1 = better(arr, 8);
    int res2 = optimal(arr, 8);
    cout << "Max subarray sum is: " << endl;
    cout << res1 << endl;
    cout << res2;
    return 0;
}
