#include <iostream>
using namespace std;

// print a single line contains:
// The numbers between N and M inclusive separated by single space.
// The message " sum =".
// The summation of all numbers between N and M inclusive.
// Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.

int main(){
    // declaration and initialization
    int num1, num2, min, max;
    int sum = 0;
    cout <<"Enter two numbers: ";
    cin >> num1 >> num2;

    // code
    if(num1 > num2){
        max = num1;
        min = num2;
    }
    else{
        max = num2;
        min = num1;
    }

    for(int i = min; i <= max; i++){

        cout << i <<" ";
        sum = sum + i;

    }
    cout << sum <<" ";
}