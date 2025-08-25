// Write a function to return two element that return the given target

#include <bits/stdc++.h>
using namespace std;

// Function for two sum
// Better
void better(int arr[], int n, int k)
{
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

// Optimal (using map)
void optimal(int arr[], int n, int k)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int rem = arr[i];
        int req = k - rem;
        if (mp.find(req) != mp.end())
        {
            cout << i << " " << mp[req];
            return;
        }
        mp[rem] = i;
    }
}

// main function
int main()
{
    int arr[4] = {2, 7, 11, 15};
    int k = 9;
    cout << "Better approach output: ";
    better(arr, 4, k);

    cout << "Optimal approach output: ";
    optimal(arr, 4, k);
    return 0;
}