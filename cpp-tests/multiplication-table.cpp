#include <iostream>
using namespace std;

//print mltiplication table for a number n

int main(){

    // declaratioin and initialization
    int x;
    int y;
    cout <<"Enter a number: ";
    cin >> x;

    // code
        for(int j = 1; j <= 12; j++){
            y = x * j;
            cout<<x<<"*"<<j<<"="<<y<<"\n";
        }
    }

