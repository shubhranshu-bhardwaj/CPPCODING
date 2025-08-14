// Write a program to check prime number

#include <bits/stdc++.h>
using namespace std;

// Function to check prime

bool checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (count != 1 && count > 2)
            {
                return false;
            }
        }
    }
    // if(count == 2){
    //     return true;
    // }

    return true;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    // if(checkPrime(num)){
    //     cout << "Prime number";
    // }
    // else{
    //     cout << "Not a prime number";
    // }
    // if (isPrime(num))
    // {
    //     cout << "Prime number";
    // }
    // else
    // {
    //     cout << "Not a prime number";
    // }
    if(prime(num)){
        cout << "Prime number";
    }
    else{
        cout << "Not a prime number";
    }

    return 0;
}