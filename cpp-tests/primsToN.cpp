#include <iostream>
using namespace std;

// getting prime values between number and x

int main(){
    // declration and initialization
    int flag = 0;
    int x;
    cout <<"Enter a number: ";
    cin >> x;
    // code
    for(int i = 2; i <= x; i++){
        for(int j = 2; j < i; j++){
            int mod = i % j;
            if(mod == 0){
                flag ++;
                break;
            }

        }
        //if prime print
        if(flag == 0){
            cout<< i <<" ";
        }
        flag = 0;
    }

}