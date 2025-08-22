/*
Write a function to left rotate an array by D places
Input: [1,2,3,4,5]
D = 3
Output: [3,4,5,1,2]
*/

#include <bits/stdc++.h>
using namespace std;

// Function for rotating array
// Brute force

void rotate(int arr[], int n, int d)
{
    int k = d % n;
    int temp[k];

    // storing d array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // shifting array
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // storing temp in array
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}
// reverse function
void reverseFunc(int arr[], int start, int end)
{
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// optimal

void rotateD(int arr[], int n, int d)
{
    int k = d % n;
    // reverse first half
    reverseFunc(arr, 0, k - 1);
    // reverse second half
    reverseFunc(arr, k, n - 1);
    // reverse whole array
    reverseFunc(arr, 0, n - 1);
}

// main function

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int d = 2;
    // rotate(arr, 5, d);
    rotateD(arr, 5, d);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}