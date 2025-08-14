// Write a function to find GCD

#include <bits/stdc++.h>
using namespace std;

// Function to find GCD

int findGCD(int a, int b)
{
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}

// Optimal approach

int findGCDop(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    return a;
}

int main()
{
    int num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;

    cout << "GCD: " << endl;

    int res1 = findGCD(num1, num2);
    int res2 = findGCDop(num1, num2);
    cout << res1 << endl;
    cout << res2;

    return 0;
}