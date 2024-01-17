#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Print the array after doing the following operations:
// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.

int main()
{
    // declarationand initialization
    int min;
    int max;
    int hh;
    int jj;
    int swap;
    int size;
    cout << "Enter a size of yur array: ";
    cin >> size;
    int arr[size];

    // code

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // getting a min value.
    min = arr[0];
    max = arr[0];
    for (int j = 0; j < size; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            jj = j;
        }
        if (max < arr[j])
        {
            max = arr[j];
            hh = j;
        }
    }

    // swap values of index
    swap = arr[hh];
    arr[hh] = arr[jj];
    arr[jj] = swap;

    // print
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }

}