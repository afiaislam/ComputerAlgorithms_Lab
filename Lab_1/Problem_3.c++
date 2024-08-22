// To find the average of n numbers using Array.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = sum / 2;

    cout << "The average of array elements is: " << avg;

    return 0;
}