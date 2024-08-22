// To separate Odd and Even integers into separate Array.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    int odd[n];
    int even[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[a] = arr[i];
            a++;
        }
        else
        {
            odd[b] = arr[i];
            b++;
        }
    }
    cout << "The elements of Even array: ";
    for (int i = 0; i < a; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    
    cout << "The elements of Odd array: ";
    for (int i = 0; i < b; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}