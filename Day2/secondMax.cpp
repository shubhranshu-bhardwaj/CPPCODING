// Find the second largest element

#include <bits/stdc++.h>
using namespace std;

// Function to find the second maximum element in an array

int secondMax(int arr[], int n)
{
    sort(arr, arr + n); // Sort the array
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
            return arr[i];
    }
    return -1; // If all elements are the same, return -1
}

int secondMaxOptimized(int arr[], int n)
{
    if (n < 2)
        return -1; // Not enough elements for second maximum
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second; // If no second max found
}

int main(){
    int arr[5] = {1, 5, 8, 6, 9};
    int res1 = secondMax(arr, 5);
    int res2 = secondMaxOptimized(arr, 5);
    cout<< res1 <<" "<< res2;
    return 0;
}