// Check a no is armstrong 

#include <bits/stdc++.h>
using namespace std;

// Function to check armstrong no

bool isArmstrong(int n){
    int sum = 0;
    int check = n;
    while (check>0)
    {
        int lastDigit = check%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        check = check/10;
    }

    if(sum == n){
        return true;
    }

    return false;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isArmstrong(num)){
        cout << "The number is armstrong";
    }
    else{
        cout << "The number is not armstrong";
    }

    return 0;
}