// Reverse an array

#include<bits/stdc++.h>
using namespace std;

// brute force approach
void reverseArray(int arr[], int n) {
   int temp[n];
    for(int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Optimized approach using two pointers
void reverseArrayOptimized(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr, 5);
    cout << "Reversed array (brute force): ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[5] = {1,2,3,4,5};
    reverseArrayOptimized(arr2, 5);
    cout << "Reversed array (optimized): ";
    for(int i=0;i<5;i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}