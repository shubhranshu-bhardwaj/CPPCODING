/*
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

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2*n - (2*i + 1); j++)
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
    pattern8(6);
    return 0;
}