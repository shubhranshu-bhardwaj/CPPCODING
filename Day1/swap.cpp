// Write a function that swaps 2 numbers (by value + by reference)

#include <bits/stdc++.h>
using namespace std;

// Function to swap by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    // Swap by value
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    // Swap by reference
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}
