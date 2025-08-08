// Take n, print sum of numbers 1 to n

#include <bits/stdc++.h>
using namespace std;

// Function for sum

int sum(int n){
    int total = 0;
    for(int i=1;i<=n;i++){
        total += i;
    }
    return total;
}

// main function

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = sum(n);
    cout << "Sum of numbers from 1 to " << n << " is: " << result << endl;
    
    return 0;
}