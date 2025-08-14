// Write a function to print all divisors of a number

#include <bits/stdc++.h>
using namespace std;

// Function to print divisors

void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Optimal approach

void print(int n)
{
    vector<int> vec;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            vec.push_back(i);
            if ((n / i) != i)
            {
                vec.push_back(n / i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "All divisors of " << num << endl;
    printDivisors(num);
    print(num);
}