#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.

int main(){

    // declaration and initialization
    int size;
    cout <<"Enter the size of your array: ";
    cin >> size;
    int arr[size];

    // code
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < size; j++){
        if(arr[j] <= 10){
            cout <<"A["<<j<<"]"<<":"<<arr[j]<<"\n";
        }
    }

}