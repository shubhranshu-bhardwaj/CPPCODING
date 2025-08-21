// Write a function to return the count and array of unique element without creating new array

#include <bits/stdc++.h>
using namespace std;

// Function for removing duplicates
// Brute force using set

int duplicate(int arr[], int n)
{
    set<int> st;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        arr[count] = it;
        count++;
    }

    return count;
}

// Optimal

int optimal(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

// main function
int main()
{
    int arr[6] = {1, 1, 2, 2, 3, 3};
    int arr2[6] = {1, 1, 2, 2, 3, 3};
    int res1 = duplicate(arr, 6);
    int res2 = optimal(arr2, 6);

    cout << "Duplicate count is: " << endl;
    cout << res1 << endl;
    cout << res2;
}