// Find maximum element in an array

#include <bits/stdc++.h>
using namespace std;

// Function to find maximum element in an array

int findMax(int arr[], int n){
    int maxElement = arr[0]; // assuming first element is maximum
    for(int i=0;i<n;i++){
        if(arr[i] > maxElement) {
            maxElement = arr[i]; // update maxElement if current element is greater
        }
    }
    return maxElement;
}

int main(){
    cout<< "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxElement = findMax(arr, n);
    cout << "The maximum element is: " << maxElement << endl;
    return 0;
}