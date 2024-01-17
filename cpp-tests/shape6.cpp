#include <iostream>
using namespace std;

// print spaces and stars.

int main(){
    // declaration and initialization
    int rows = 4;

    for(int i = 1; i <= rows; i++){
        for(int k = 3; k >= i; k--){
            cout <<" ";
        }
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout <<"\n";
    }
}