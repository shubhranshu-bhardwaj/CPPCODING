// Write a function to return the first index of given element

#include <bits/stdc++.h>
using namespace std;

// function for linear search

int linear(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}

// main function
int main()
{
    int arr[6] = {1, 2, 3, 4, 3, 5};
    int res = linear(arr, 6, 3);
    cout << "First index is: " << res;
    return 0;
}