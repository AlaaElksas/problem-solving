#include <iostream>
using namespace std;

// print a certain shape.

int main(){
    // declaration and initialization
    int rows = 5;

    // code
    for(int i = rows; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout <<"\n";
    }

}