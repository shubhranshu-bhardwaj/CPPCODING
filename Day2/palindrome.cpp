// Check if Array is palindrome

#include <bits/stdc++.h>
using namespace std;

// Function to check if an array is a palindrome
bool isPalindrome(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    if (isPalindrome(arr, 5))
        cout << "Array is a palindrome" << endl;
    else
        cout << "Array is not a palindrome" << endl;

    return 0;
}