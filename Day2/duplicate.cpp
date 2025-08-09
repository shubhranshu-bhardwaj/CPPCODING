// Check if array has duplicate element

#include <bits/stdc++.h>
using namespace std;

// Function to check duplicate element

bool hasDuplicate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 4, 2, 5};
    if (hasDuplicate(arr, 5))
        cout << "Array has duplicate elements" << endl;
    else
        cout << "Array does not have duplicate elements" << endl;
    
    return 0;
}