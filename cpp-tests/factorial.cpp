#include <iostream>
using namespace std;

// print the factorial of number n.

int main(){
    // declaration and initialization
    int fac = 1;
    int size;
    cout <<"Enter number of trials: ";
    cin >> size;

    // code
    for(int i = 0; i < size; i++){
        int x;
        cout <<"pick a number: ";
        cin >> x;
        for(int j = 1; j <= x; j++){
            fac = fac * j;
        }
        cout << fac <<"\n";
        fac = fac / fac;
    }
}