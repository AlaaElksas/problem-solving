#include <iostream>
using namespace std;

// getting a number from user and print it from right to left>

int main(){

    // declaration and initialization
    int n;
    cout <<"Enter the number of trials and numbers: ";
    cin >> n;

    // code
    for(int i = 0; i < n; i++){
        int num;
        // cout <<"Enter numbers: ";
        cin >> num;
        while(num > 0){
            int mod = num % 10;
            cout << mod <<" ";
            num = num / 10;
        }
    cout <<"\n";
    }

}