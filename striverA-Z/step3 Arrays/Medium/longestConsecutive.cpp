// Write a function for returning the longest count of consecutive sequence

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

// Function for consecutive sequence
// Brute
bool linear(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return true;
    }
    return false;
}

int brute(int arr[], int n)
{
    int longest = 1;
    // pick a element and search for its
    // consecutive numbers:
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int cnt = 1;
        // search for consecutive numbers
        // using linear search:
        while (linear(arr, n, x + 1) == true)
        {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

// Better (using sorting)
int better(int arr[], int n)
{
    if (n == 0)
        return 0;

    // sort the array:
    sort(arr, arr + n);
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    // find longest sequence:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            // arr[i] is the next element of the
            // current sequence.
            cnt += 1;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller)
        {
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

// Optimal (using set)
int optimal(int arr[], int n)
{
    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;
    // put all the array elements into set:
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    // Find the longest sequence:
    for (auto it : st)
    {
        // if 'it' is a starting number:
        if (st.find(it - 1) == st.end())
        {
            // find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

// main function
int main()
{
    int arr[6] = {100, 200, 1, 2, 3, 4};
    int res1 = brute(arr, 6);
    int res2 = better(arr, 6);
    int res3 = optimal(arr, 6);
    cout << "Longest length is: " << endl;
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3;
    return 0;
}