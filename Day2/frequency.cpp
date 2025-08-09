// Count frequency of an element

#include <bits/stdc++.h>
using namespace std;

// Function to count frequency

int frequency(int arr[], int n, int val)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[5] = {1, 4, 2, 3, 2};
    int result = frequency(arr, 5, 2);
    cout << "Count is: " << result;
    return 0;
}