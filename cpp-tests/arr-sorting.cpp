#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Print the numbers after sorting them.

int main(){

    // declaration and initialization

    int size;
    cout <<"Enter a size of your array: ";
    cin >> size;
    int arr[size];

    // code
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < size; j++){
        for(int k = 0; k < size; k++){
            if(arr[k] > arr[k+1]){
                int x = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = x;
            }
        }
        }
    for(int a = 0; a < size; a++){
        cout << arr[a] <<" ";
        }




}