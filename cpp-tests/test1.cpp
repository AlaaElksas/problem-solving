#include <iostream>
using namespace std;

// in this programe calculate area of a circle

int main(){

    // declaration an initialization
    double r, area;
    
    double π = 3.141592653;

    // take value from user
    cout << "Entre the value: ";
    cin >> r;

    // calculate the area of the circle
    area = π * r * r;

    // print area value
    cout << "area = "<< area<<"\n";

}
