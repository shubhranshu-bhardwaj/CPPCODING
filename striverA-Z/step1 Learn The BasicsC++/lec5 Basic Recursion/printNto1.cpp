// Write a recursive function to print from N to 1

#include <bits/stdc++.h>
using namespace std;

// Recursive function

void printN(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    printN(i - 1, n);
}

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    print(n - 1);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    printN(num, num);
    cout << endl;
    print(num);
    return 0;
}