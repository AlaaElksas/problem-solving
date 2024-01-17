#include <iostream>
using namespace std;

// check on number case

int main(){

    // declaratio and initialization
    int size;
    int even, odd, positive, negative;
    // take size from user
    cout << "Enter a size: ";
    cin >> size;

    //code
    for(int i = 0; i < size; i++){

        int num;
        cout <<"pick a number: ";
        cin >> num;

        //first condition
        if(num > 0){
           positive ++;
        }
        else if(num < 0){
            negative ++;
        }
        // end first condition

        // second condition
       int mod = num % 2;
        if(mod == 0){
            even ++;
        }
        else if(!(mod == 0)){
            odd ++;
        }
    }

    // print result
    cout << even <<"\n" << odd <<"\n" << positive << "\n"<< negative << "\n";

}