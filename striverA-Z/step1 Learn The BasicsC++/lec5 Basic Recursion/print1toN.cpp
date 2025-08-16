// Write a recursive function to print from 1 to N

#include <bits/stdc++.h>
using namespace std;

// Recursive function
void printN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    printN(i + 1, n);
}

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    printN(1, num);
    cout << endl;
    print(num);
    return 0;
}