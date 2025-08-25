// Write a function to return the maximum profit

#include <bits/stdc++.h>
using namespace std;

// Function for max profit
int profit(int arr[], int n)
{
    int maxProfit = 0;
    int mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, arr[i]);
    }
    return maxProfit;
}

// main function
int main()
{
    int arr[6] = {7, 1, 5, 3, 6, 4};
    int res = profit(arr, 6);
    cout << "Max profit is: " << res;
    return 0;
}