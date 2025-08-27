// Write a function to print all the leaders in an array
// [10, 22, 12, 3, 0, 6] -> [22, 12, 6]

#include <bits/stdc++.h>
using namespace std;

// Function for leaders
// Brute
void leaders(int arr[], int n)
{
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int lead = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                lead = false;
                break;
            }
        }
        if (lead)
        {
            vec.push_back(arr[i]);
        }
    }
    // Print the leader
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

// Optimal
void optimal(int arr[], int n)
{
    vector<int> vec;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            vec.push_back(arr[i]);
        }
        maxi = max(arr[i], maxi);
    }
    // Print the leader
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

// main function
int main()
{
    int arr[6] = {10, 22, 12, 3, 0, 6};
    leaders(arr, 6);
    cout << endl;
    optimal(arr, 6);
    return 0;
}