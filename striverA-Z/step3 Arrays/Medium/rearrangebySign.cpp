// Write a function to rearrange array by sign +ve -ve +ve -ve

#include <bits/stdc++.h>
using namespace std;

// Function for arranging array
// Brute
void brute(int arr[], int n)
{
    int pos[n / 2];
    int neg[n / 2];

    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            // store +ve element in pos[]
            pos[j] = arr[i];
            j++;
        }
        else
        {
            // store -ve element in neg[]
            neg[k] = arr[i];
            k++;
        }
    }

    // now modify the array
    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }

    // print the arr[]
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Optimal
void optimal(int arr[], int n)
{
    int ans[n];
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        else
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    // print ans[]
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

// main function
int main()
{
    int arr[6] = {3, 1, -2, -5, 2, -4};
    brute(arr, 6);
    cout << endl;
    optimal(arr, 6);
    return 0;
}
