#include <iostream>
using namespace std;

//Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

int main(){

    // declaration and initialization
    int size;
    int arr[size];
    int sum = 0;
    unsigned int j= (unsigned int )sum;

    cout <<"Enter a size of your array: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        sum = sum + arr[i];

    }
    if(sum < 0){
        sum = sum / -1;
    }
    cout << sum <<"\n";
}