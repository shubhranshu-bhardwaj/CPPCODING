/*
 *
 ***
 *****
 *******
 *********
 ***********
 ***********
 *********
 *******
 *****
 ***
 *
 */

#include <bits/stdc++.h>
using namespace std;

// Pattern function

void firstHalf(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void secondHalf(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    firstHalf(6);
    secondHalf(6);
    return 0;
}