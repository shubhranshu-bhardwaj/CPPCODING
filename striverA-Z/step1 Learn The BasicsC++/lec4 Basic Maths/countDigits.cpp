// Count no of digits in a given number

#include <bits/stdc++.h>
using namespace std;

// function to count digit

int countDigit(int n)
{
    //int count = (int)(log10(n)+1);
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int res = countDigit(num);
    cout << "No of digits: " << res;
}