// Insert a new data in the end of an Array.


#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int n;
    cout << "Enter a new data: ";
    cin >> n;

    for (int i = 0; i <= size; i++)
    {
        arr[size] = n;
    }
    cout << "After insert a new data the array elements are: ";
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}