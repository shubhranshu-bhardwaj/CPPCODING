// Write a function to check if a number is palindrome

#include <bits/stdc++.h>
using namespace std;

// Function to check palindrome

bool isPalindrome(int n)
{
    int check = n;
    int rev = 0;

    while (check > 0)
    {
        int lastDigit = check % 10;
        rev = (rev * 10) + lastDigit;
        check = check / 10;
    }

    if (rev == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << "Number is palnidrome";
    }
    else
    {
        cout << "Number is not palnidrome";
    }

    return 0;
}