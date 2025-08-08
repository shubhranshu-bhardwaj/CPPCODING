// Take a number and print if it is even/odd

#include <bits/stdc++.h>
using namespace std;

// function to check even odd
void checkEvenOdd(int num){
    if(num%2==0){
        cout<<num<<" is even";
    }
    else{
        cout<<num<<" is odd";
    }
}

int main(){
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   checkEvenOdd(num);
    return 0;
}

