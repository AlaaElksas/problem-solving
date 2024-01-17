#include <iostream>
using namespace std;

// find maximum number

int main(){

    // declaration and initialization
    int size;
    int x;
    cout<<"Entre a size: ";
    cin >> size;

    // code
    for(int i = 0; i < size; i++){


        int max = x;
        cout <<"Pick a number: ";
        cin >> x;

        if(max > x){
            x = max;
        }

    }
    // print max
    cout << x <<"\n";

}