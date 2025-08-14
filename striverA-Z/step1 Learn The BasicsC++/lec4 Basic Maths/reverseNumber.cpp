// Reverse a given number

#include <bits/stdc++.h>
using namespace std;

// Function to reverse number

int revNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Original number: " << num << endl;
    int res = revNum(num);
    cout << "Reverse number: " << res;
}