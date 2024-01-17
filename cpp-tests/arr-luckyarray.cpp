#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Determine if the array is lucky or not.

int main(){

    // declaration and initialization
    int counter;
    int min;
    int size;
    cout <<"Enter a size of your array: ";
    cin >> size;
    int arr[size];

    // code
    int i;
    for( i = 0; i < size; i++){
        cin >> arr[i];
    }
    min = arr[i];
    for(int i = 0; i < size; i++){

        if(min > arr[i+1]){
            min = arr[i+1];
        }
    }
    for(int i = 0; i < size; i++){
        if(arr[i] == min){
            counter += 1;
        }
    }
    int mod = counter % 2;
    if(mod != 0){
        cout <<"lucky"<<"\n";
    }
    else{
        cout <<"unlucky"<<"\n";
    }

}