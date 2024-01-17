#include <iostream>
using namespace std;

// compare between two strings

int main(){

    // declaration and initialization
    string f1, s1, f2, s2;

    // asking for names
    cout << "Entre your names: ";
    cin >> f1 >> s1 >> f2 >> s2;

    // compare the names
    if(s1 == s2){
        cout <<"Are Brothers\n";
    }
    else{
        cout <<"Not!";
    }

}