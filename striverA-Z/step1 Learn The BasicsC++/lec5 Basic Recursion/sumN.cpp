// Write a recursive function to get the sum of first N numbers

#include <bits/stdc++.h>
using namespace std;

// Recursive function
// Parameterized
int getSum(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }
    return n + getSum(n - 1);
}

// functional
void func(int i, int sum)
{

    // Base Condition.
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }

    // Function call to increment sum by i till i decrements to 1.
    func(i - 1, sum + i);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Sum is: " << endl;
    func(num, 0);
    int res = getSum(num);
    cout << res;
}