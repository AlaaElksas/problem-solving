#include <iostream>
using namespace std;

// getting the greatest common divisor between two integers>

int main(){
    // declaration and initialization
    int a, b, gcd;
    cout <<"Enter two numbers: ";
    cin >> a >> b;

    for(int i = 1; i <= a && i <= b; i++){
        int moda = a % i;
        int modb = b % i;
        if((moda == 0) && (modb == 0)){
            gcd = i;
        }
    }
    cout << gcd <<"\n";
}