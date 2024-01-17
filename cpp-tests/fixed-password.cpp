#include <iostream>
using namespace std;

//check on password if it is right or wrong

int main(){

    // declaration and initializarion
    int pass = 1999;
    int x;
    cout<<"Enter a password: ";
    cin >> x;
    // code
    while(!(x == pass)){
        cout <<"wrong\n";
        int x;
        cout <<"Enter a password: ";
        cin >> x;
        if(x == pass){
            cout << "correct\n";
            break;
        }

    }


}