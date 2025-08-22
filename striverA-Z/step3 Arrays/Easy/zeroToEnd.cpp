// Write a function to shift all 0 to the end of array

#include <bits/stdc++.h>
using namespace std;

// function for shifting 0
// brute

void shiftZero(int arr[], int n)
{
    vector<int> vec; // for storing non-zero
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            vec.push_back(arr[i]);
        }
    }

    // shifting non-zero
    for (int i = 0; i < vec.size(); i++)
    {
        arr[i] = vec[i];
    }

    // shifting 0 to end
    for (int i = vec.size(); i < n; i++)
    {
        arr[i] = 0;
    }
}

// optimal (two pointer)

void optimal(int arr[], int n)
{
    int j = -1;

    // find the 1st 0
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // start swapping
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// main function
int main()
{
    int arr[6] = {1, 2, 0, 4, 0, 5};
    // shiftZero(arr, 6);
    optimal(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}