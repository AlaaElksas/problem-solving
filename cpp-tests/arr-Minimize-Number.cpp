#include <iostream>
using namespace std;

// Given a number N and an array A of N positive numbers. Print maximum possible operations that can be performed.
// The operation is as follows: if all numbers are even then divide each of them by 2 otherwise, you can not perform any more
// operations.

int main()
{

    // declaration and initialization
    int counter = 0;
    int size;
   // cout << "Enter the size of your array: ";
    cin >> size;
    int arr[size];

    // code
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] % 2 != 0)
        {
            break;
        }

        for (int j = 0; j < size; j++)
        {
            if (arr[j] % 2 == 0)
            {
                arr[j] = arr[j] / 2;
            }else{
                flag=1;
                break;
            }
        }

        if (flag == 0)
        {
            counter++;
        }
    }
    cout << counter << "\n";
}
