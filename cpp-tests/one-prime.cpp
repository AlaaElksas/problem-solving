#include <iostream>
using namespace std;

// Detrimine if the number is prime or not

int main(){
    // declaration and initialization
    int flag = 0;
    int x;
    cout<<"Entre a number: ";
    cin >> x;

    // code
    for(int i = 2; i < x; i++){
        int mod = x % i;
        if(mod == 0){
            cout << "no!\n";
            flag ++;
            break;
        }
    }
    // print if prime
    if(flag == 0){
        cout <<"yes!\n";
    }
}