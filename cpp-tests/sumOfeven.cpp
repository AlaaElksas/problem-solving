#include <iostream>
using namespace std;

// print even number

int main(){

    // declaration and initialization
    int n;
    int sum = 0;


    // take n value from user
    cout <<"Entre the range: ";
    cin >> n;

    // calculate the equation
    for(int i = 0; i <= n; i += 2)
    {
        sum = sum + i;

    }
    cout << sum <<"\n";

}