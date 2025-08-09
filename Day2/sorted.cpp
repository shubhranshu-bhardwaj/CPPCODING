// Check an array is sorted or not

#include <bits/stdc++.h>
using namespace std;

// Brute force approach
bool isSorted(int arr[], int n)
{
    int copy[n];
    for (int i = 0; i < n; i++)
        copy[i] = arr[i];
    sort(copy, copy + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != copy[i])
            return false;
    }
    return true;
}

// optimized approach
bool isSortedOptimized(int arr[], int n)
{
    if (n <= 1)
        return true; // An array of size 0 or 1 is sorted
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    if (isSorted(arr, 5))
        cout << "Array is sorted (brute force)" << endl;
    else
        cout << "Array is not sorted (brute force)" << endl;

    if (isSortedOptimized(arr, 5))
        cout << "Array is sorted (optimized)" << endl;
    else
        cout << "Array is not sorted (optimized)" << endl;

    return 0;
}