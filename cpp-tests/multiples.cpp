#include <iostream>
using namespace std;

//Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

int main(){

    // declration and initialization
    int a, b;

    // take values from the user
    cout << "Entre the values: ";
    cin >> a >> b;

    int mod = a % b;
    int modd = b % a;
    // condition
    if(mod == 0){
        cout << "Multiples\n";
    }
    else if(modd == 0){
        cout << "Multiples\n";
    }
    else{
        cout << "No Multiples\n";
    }

}