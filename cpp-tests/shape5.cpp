#include <iostream>
using namespace std;

// print numbers and spaces

int main(){
    // declararion and initialization
    int rows = 5;

    // code
    for(int i = 1; i <= rows; i++){
        // print spaces
        for(int k = 1; k < i; k++){
            cout<<" ";
        }
        // print numbers
        for(int j = rows; j >= i; j--){
            cout << j;
        }

            cout <<"\n";
    }


}