#include <iostream>
using namespace std;

// Given a number N. Print the summation of the numbers that is between 1 and N

int main(){

    // declaration and initialization
    int n;
    int sum = 0;

    // take n value from user
    cout <<"Entre the value: ";
    cin >> n;

    // calculate the equation
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }

    // print value of sum
    cout <<"sum = "<<sum<<"\n";
}