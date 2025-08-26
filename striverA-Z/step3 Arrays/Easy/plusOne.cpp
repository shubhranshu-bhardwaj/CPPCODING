// Write a function to add 1 in the given array
/*
[1,2,3] -> [1,2,4]
[9] -> [1,0]
*/

#include <bits/stdc++.h>
using namespace std;

// Function for add 1
void soln(int arr[], int n)
{
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(arr[i]);
    }

    bool carry = true;

    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] < 9)
        {
            vec[i]++;
            carry = false;
            break;
        }
        vec[i] = 0;
    }
    if (carry)
    {
        vec.insert(vec.begin(), 1);
    }

    for (auto it : vec)
    {
        cout << it << " ";
    }
}

// main function
int main()
{
    int arr[3] = {1, 2, 3};
    soln(arr, 3);
    return 0;
}