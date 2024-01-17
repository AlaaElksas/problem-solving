#include <iostream>
using namespace std;

// check which is the max and min numbers between integers

int main(){

    // declaration and initialization
    int a, b, c;

    // take values from user
    cout << "Entre the values: ";
    cin >> a >> b >> c;

    // check which num is max
    if((a > b) && (a > c)){
        cout << a <<"\n";
    }
    else if((b > a) && (b > c)){
        cout << b <<"\n";
    }
    else if((c > a) && (c > b)){
        cout << c <<"\n";
    }

    // check which is min
    if((a < b) && (a < c)){
        cout << a << "\n";
    }
    else if((b < a) && (b < c)){
        cout << b <<"\n";
    }
    else if((c < a) && (c < b)){
        cout << c <<"\n";
    }

}