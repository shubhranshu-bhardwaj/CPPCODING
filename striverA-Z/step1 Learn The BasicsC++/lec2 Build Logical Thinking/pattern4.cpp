/*
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
 */

#include <bits/stdc++.h>
using namespace std;

// Pattern function

void pattern4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern4();
    return 0;
}