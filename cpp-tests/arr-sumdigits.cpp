#include <iostream>
using namespace std;

// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

int main()
{

    // declaration and initialization
    int num;
    int sum = 0;
    int size;
    cout << "Enter a size of your array: ";
    cin >> size;
    char arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << arr[j] << "-";
        }
        cout << endl;
    }
}