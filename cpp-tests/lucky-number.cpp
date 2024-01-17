#include <iostream>
using namespace std;

// find any number only contain 7 , 4 or both . that's will be a lucky number

int main(){
    // declaration and initialization
    int flag = 0;
    int lucky;
    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;

    // check if it is a lucky number (code)
    for(int i = a; i <= b; i++){
        int num = i;
        while(num > 0){
            int mod = num % 10;
            if(!(mod == 4) && !(mod == 7)){
                flag = 1;
                break;
            }
            num = num / 10;
            flag = 0;
        }
        if(flag == 0){
            cout << i <<" ";
        }

    }

}