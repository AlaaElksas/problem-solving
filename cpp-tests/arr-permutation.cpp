#include <iostream>
using namespace std;

//  Given a number N and two arrays A , B of N numbers. Determine if B is a permutation of A or not.

int main()
{

    // declaration and intialization
    int flag = 0;
    int size;
    cout << "Enter the size of your array: ";
    cin >> size;
    int arr[size];
    int arr2[size];

    // take numbers of the two arrays from user
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr2[j])
            {
                flag ++;
                break;
            }
        }

    }

    if (flag == size)
    {
        cout << "Yes!"
             << "\n";
    }
    else
    {
        cout << "No!"
             << "\n";
    }
}
