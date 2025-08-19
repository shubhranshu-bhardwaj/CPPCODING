/*
Select minimum and swap
*/

#include <bits/stdc++.h>
using namespace std;

// function for selection sort

void selectionSort(int arr[], int n)
{
    // outer loop
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i; // consider this index has minimum
        // inner loop
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j; // chnage the minimu
            }
        }
        // swap them
        swap(arr[mini], arr[i]);
    }
}

int main()
{
    int arr[5] = {5, 9, 12, 13, 2};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}