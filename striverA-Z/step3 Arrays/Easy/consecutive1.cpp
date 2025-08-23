// Write a function to return the count of maximum consecutive one

#include <bits/stdc++.h>
using namespace std;

// Function for consecutive ones

int ones(int arr[], int n)
{
    int maxi = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(count, maxi);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

// main function
int main()
{
    int arr[6] = {1, 1, 0, 1, 1, 1};
    int res = ones(arr, 6);
    cout << "Maximum consecutive ones is: " << res;
    return 0;
}