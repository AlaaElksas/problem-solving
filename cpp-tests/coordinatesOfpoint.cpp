#include <iostream>
using namespace std;

// determine in which quarter does a point belong

int main(){

    // declaration and initialization
    double x, y;

    // take values from user
    cout << "Enter the values of your point: ";
    cin >> x >> y;

    // check the position of the point
// start first condition
    if((x > 0) && (y > 0)){
        cout << "Q1\n";
    }
    else if((x < 0) && (y > 0)){
        cout << "Q2\n";
    }
    else if((x < 0) && (y < 0)){
        cout << "Q3\n";
    }
    else if((x > 0) && (y < 0)){
        cout << "Q4\n";
    }
// end of first condition
//start new condition
    if((x == 0) && (y == 0)){
        cout << "Origem\n";
    }
    else if((x == 0) && !(y == 0)){
        cout << "Eixo Y\n";
    }
    else if(!(x == 0) && (y == 0)){
        cout << "Eixo X\n";
    }
}