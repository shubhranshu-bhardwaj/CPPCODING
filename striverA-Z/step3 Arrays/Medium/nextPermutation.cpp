// Write a function to find the next permutation

#include <bits/stdc++.h>
using namespace std;

// Function for permutation
// Using STL
void permutation(int arr[], int n)
{
    next_permutation(arr, arr + n);
}

// Optimal
void optimal(int arr[], int n)
{

    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    // If no break point is found, reverse the whole array:
    if (ind == -1)
    {
        reverse(arr, arr + n);
        return;
    }

    // Step 2: Find the next greater element and swap:
    for (int i = n - 1; i > ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    // Step 3: Reverse the suffix:
    reverse(arr + ind + 1, arr + n);
}

// main function
int main()
{
    int arr[3] = {1, 3, 2};
    // permutation(arr, 3);
    optimal(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}