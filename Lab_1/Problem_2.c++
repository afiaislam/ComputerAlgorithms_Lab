// Find Sum of array elements.


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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }

    cout<<"The sum of array elements is: "<<sum;

    return 0;

}