#include <iostream>
using namespace std;

int main()
{

    // declaration and initialization
    int num;
    cout << "Enter a number: ";
    cin >> num;

    long long arr[50];

    arr[0] = 0;
    arr[1] = 1;
    // build the array
    for (int i = 2; i < 50; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[num - 1] << " ";
}