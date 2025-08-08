// Write function isPrime(n) that returns true or false

#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Main function
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}