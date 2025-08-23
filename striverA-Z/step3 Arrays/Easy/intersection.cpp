// Write a function to print intersection of two array

#include <bits/stdc++.h>
using namespace std;

// Function for intersection
// Brute

void intersection(int arr1[], int n1, int arr2[], int n2)
{
    int n3 = min(n1, n2);
    int visited[n3] = {0}; // for checking element
    vector<int> vec;       // for storing intersection
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                vec.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i])
            {
                break;
            }
        }
    }

    for (auto it : vec)
    {
        cout << it << " ";
    }
}

// Optimal (two pointer)

void optimal(int arr1[], int n1, int arr2[], int n2)
{
    vector<int> vec;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            vec.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for (auto it : vec)
    {
        cout << it << " ";
    }
}

// main function

int main()
{
    int arr1[5] = {1, 2, 3, 3, 4};
    int arr2[4] = {2, 3, 4, 4};
    intersection(arr1, 5, arr2, 4);
    cout << endl;
    optimal(arr1, 5, arr2, 4);
    return 0;
}