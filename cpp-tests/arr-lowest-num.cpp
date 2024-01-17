#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Print the lowest number and its position.

int main(){

    // declaration and initialization
    int lowest;
    int index;
    int size;
    cout <<"Enter the size of your array: ";
    cin >> size;
    int arr[size];



    // build the array
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // check on the array numbers to see which one is the lowest
    lowest = arr[0];
    for(int j = 0; j < size; j++){

        if(arr[j] < lowest){
            lowest = arr[j];
            index = j;

        }

    }
    cout << lowest <<" "<< index<<"\n";

}