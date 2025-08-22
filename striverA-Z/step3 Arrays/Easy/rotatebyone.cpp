/* Write a function to left rotate an array by one place
Input: [1,2,3,4,5]
Output: [2,3,4,5,1]
*/

#include <bits/stdc++.h>
using namespace std;

// function for rotating array

void leftRotate(int arr[], int n)
{
    int temp = arr[0]; // storing 1st element in temp variable

    // shifting array
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp; // shift 1st element to the last
}

// main function

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    leftRotate(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}