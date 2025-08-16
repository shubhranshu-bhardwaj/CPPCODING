// Write recursive function to print names N times

#include <bits/stdc++.h>
using namespace std;

// Recursive function

void printName(int i, int n)
{
    // base case
    if (i > n)
    {
        return;
    }
    cout << "Shubh" << endl;
    printName(i + 1, n);
}

int main()
{
    int num;
    cout << "Enter name: ";
    cin >> num;
    printName(1, num);
    return 0;
}