/*
 * * * * *
 * * * *
 * * *
 * *
 * 
 */

#include <bits/stdc++.h>
using namespace std;

// Pattern function

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <( n -i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    pattern5(5);
    return 0;
}