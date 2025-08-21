// Write a function to find the largest element in an arary

#include <bits/stdc++.h>
using namespace std;

// Function to find largest element

int largest(int arr[], int n){
    int maxi = arr[0]; // consediring as largest

    for(int i=1; i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

// main function

int main(){
    int arr[5] = {5,2,12,9,6};
    int res = largest(arr,5);
    cout << "Largest element is: " << res;
    return 0;
}