// Write a function to return the union of two array

#include <bits/stdc++.h>
using namespace std;

// Function for union
// Brute using set

void unionArr(int arr1[], int n1, int arr2[], int n2)
{
    set<int> st;

    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    int unionEle[st.size()];
    int i = 0;
    for (auto it : st)
    {
        unionEle[i++] = it;
    }

    int n = sizeof(unionEle) / sizeof(unionEle[0]);
    for (int i = 0; i < n; i++)
    {
        cout << unionEle[i] << " ";
    }
}

// Optimal (two pointer)

void optimal(int arr1[], int n1, int arr2[], int n2)
{
    vector<int> vec; // for storing union
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (vec.size() == 0 || vec.back() != arr1[i])
            {
                vec.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (vec.size() == 0 || vec.back() != arr2[j])
            {
                vec.push_back(arr2[j]);
            }
            j++;
        }
    }

    // if i is out of bound
    while (j < n2)
    {
        if (vec.size() == 0 || vec.back() != arr2[j])
        {
            vec.push_back(arr2[j]);
        }
        j++;
    }

    // if j is out of bound
    while (i < n1)
    {
        if (vec.size() == 0 || vec.back() != arr1[i])
        {
            vec.push_back(arr1[i]);
        }
        i++;
    }

    for (auto it : vec)
    {
        cout << it << " ";
    }
}

// main function
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 4, 5, 6};

    unionArr(arr1, 5, arr2, 5);
    cout << endl;
    optimal(arr1, 5, arr2, 5);

    return 0;
}
