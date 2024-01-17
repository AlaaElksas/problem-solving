#include <iostream>
using namespace std;

// getting the divisors for a number

int main(){
    // declaration and initialization
    int x;
    cout<<"Enter a number: ";
    cin >> x;
    int divisor;

    // divisors formula(code)
    for(int i = 1; i <= x; i++){
        divisor = x % i;
        if(divisor == 0){
            cout<< i <<"\n";
        }
    }

}