// To copy all elements of one array to another.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr1[n];
    int arr2[n];

    cout << "Enter the array 1 elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "The elements of array 2 are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}