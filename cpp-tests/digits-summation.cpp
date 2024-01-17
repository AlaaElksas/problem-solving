#include <iostream>
using namespace std;

// givin two numbers. print the summation of thier last digits

int main(){

    // declaration and initialization
    int n, m, lastn, lastm, sum;

    // take value feom user
    cout << "Entre values: ";
    cin >> n >> m;

    // calculate the sum of last digits
    lastn = n % 10;
    lastm = m % 10;
    sum = lastn + lastm;

    // print sum
    cout << "sum of last digits = "<<sum<<"\n";

}