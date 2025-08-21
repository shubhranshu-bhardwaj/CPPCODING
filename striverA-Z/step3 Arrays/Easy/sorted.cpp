// Write a function to check if the array is sorted or not

#include <bits/stdc++.h>
using namespace std;

// Function to check for sorted

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

// main function

int main()
{
    int arr[5] = {5, 6, 8, 9, 1};
    if (isSorted(arr, 5))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted";
    }
    return 0;
}