#include <iostream>
using namespace std;

// print a number of symbols in a number of rows.

int main(){
    // declaration and initialization
    char s;
    int n;

    cout <<"Enter a symbol: ";
    cin >> s;
    cout <<"Enter the number of rows: ";
    cin >> n;


    // code
    for(int i = 0; i < n; i++){
            int x;
            // cout <<"Enter the number of symbls for each row: ";
            cin >> x;
        for(int j = 0; j < x; j++){
            cout << s;
        }
        cout <<"\n";
    }

}