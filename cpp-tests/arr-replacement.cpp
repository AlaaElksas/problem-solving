#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Print the array after doing the following operations:
//Replace every positive number by 1.
// Replace every negative number by 2.

int main(){

    // declaration and initialization
    int size;
    cout <<"Enter the size of your array: ";
    cin >> size;
    int arr[size];

    //code
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < size; j++){
        if(arr[j] > 0){
            arr[j] = 1;
        }
        else if(arr[j] < 0){
            arr[j] = 2;
        }
    }
    
    for(int k = 0; k < size; k++){
        cout << arr[k] <<" ";
    }
}