#include <iostream>
using namespace std;

// searching for a number in the array and print it if exists.

int main(){
    // declaration and initialization
    int flag = 0;
    int size;
    cout <<"Enter the size of your array ";
    cin >> size;
    int arr[size];
    int search;
    cout << "what is the num you wanna find: ";
    cin >> search;

    // code
    for(int i = 0; i < size; i++){
        cin >> arr[i];

    }
    for(int j = 0; j < size; j++){
        if(search == arr[j]){
            cout << search <<"\n";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout <<"-1"<<"\n";
    }


}