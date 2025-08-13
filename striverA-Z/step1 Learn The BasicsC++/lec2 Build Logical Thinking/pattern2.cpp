/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

#include <bits/stdc++.h>
using namespace std;

// Pattern function

void pattern2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    pattern2();
    return 0;
}