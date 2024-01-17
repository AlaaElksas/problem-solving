#include <iostream>
using namespace std;

// Given a number N and an array A of N numbers. Determine if it's palindrome or not.

int main()
{

    int size;
    cout << "Enter a size of your array: ";
    cin >> size;
    int arr[size];
    int flag = 0;

    // build an array

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

  for(int i = 0; i < size; i++){
    if(arr[i] != arr[(size - 1) - i]){
        flag = 1;
        break;
    }
  }
    if(flag == 0){
        cout<<"Yes!"<<"\n";
    }
    else if(flag == 1){
        cout<<"No!"<<"\n";
    }

}