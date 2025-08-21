// Write a function to find second largest element in an array

#include <bits/stdc++.h>
using namespace std;

// Function for second largest element
// Brute force

int secondLargest(int arr[], int n)
{
    // First pass for finding largest
    int largest = arr[0]; // consedring as of now
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Second pass for finding second largest
    int second = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    return second;
}

// Optimal

int optimalSecond(int arr[], int n)
{
    int largest = arr[0], second = arr[0];

    // edge case
    if (n < 2)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
}

// main function
int main()
{
    int arr[5] = {5, 12, 6, 2, 9};
    int res1 = secondLargest(arr, 5);
    int res2 = optimalSecond(arr, 5);

    cout << "Second largest element is: " << endl;
    cout << res1 << endl;
    cout << res2;
}