#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Print the array in a reversed order.

int main(){

    // declaration and initialization.
    int size;
    cout <<"Enter the size of your array: ";
    cin >> size;
    int arr[size];

    // build the array
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int j = (size - 1); j >= 0; j--){
        cout << arr[j] <<" ";
    }

}