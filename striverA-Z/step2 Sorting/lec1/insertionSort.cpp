#include <bits/stdc++.h>
using namespace std;

// function for insertion sort

void insertionSort(int arr[], int n)
{
    // outer loop

    for (int i = 0; i < n; i++)
    {
        int j = i;
        // inner loop to compare and swap
        while (j >= 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int arr[5] = {9, 6, 12, 3, 2};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}