// Write a recursive function to count from 0 to 5

#include <bits/stdc++.h>
using namespace std;

// Recursive function

void printCount(int count)
{
    if (count > 5)
    {
        return;
    }
    cout << count << endl;
    count++;
    printCount(count);
}

int main()
{
    printCount(0);
    return 0;
}