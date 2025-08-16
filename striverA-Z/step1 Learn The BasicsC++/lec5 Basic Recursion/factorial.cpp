// Write a recursive function for factorial of N

#include <bits/stdc++.h>
using namespace std;

// Recursive function for factorial

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int res = factorial(num);
    cout << "Factorial: " << res;
    return 0;
}