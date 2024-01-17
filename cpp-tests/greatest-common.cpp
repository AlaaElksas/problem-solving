#include <iostream>
using namespace std;

// getting greatest common divisor between a , b

int main(){
    // declaration and initialization
    // int smallest;
    // int largest;
    int a, b, gcd;
    cout<<"Enter two numbers: ";
    cin >> a >> b;

    // check which on is larger
    // if (a > b){
    //      largest = a;
    //      smallest = b;
    // }
    // else{
    //     largest = b;
    //     smallest = a;
    // }

    // check greatest common divisor
    for(int i = a; i > 1; i--){
      int moda = a % i;
      int modb = b % i;
      if((moda == 0) && (modb == 0)){
        gcd = i;
      }
    }
    cout << gcd <<"\n";
}