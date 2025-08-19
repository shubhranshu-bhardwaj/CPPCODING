// Swap adjacent element with minimum

#include <bits/stdc++.h>
using namespace std;

// function for bubble sort

void bubbleSort(int arr[], int n)
{
    // outer loop

    for (int i = n - 1; i >= 0; i--)
    {
        int swapped = 0; // for optimized code if array is sorted
        // inner loop
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}

int main()
{
    int arr[5] = {5, 12, 13, 9, 2};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}