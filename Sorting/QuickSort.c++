#include <iostream>
using namespace std;

void exchange(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int p, int r)
{
    int x = arr[r];
    int i = p - 1;

    for (int j = p; j <= r-1 ; j++)
    {
        if (arr[j] <= x)
        {
            i = i + 1;
            exchange(arr, i, j);
        }
    }
    exchange(arr, i + 1, r);
    return i + 1;
}
void quickSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = partition(arr, p, r);

        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array: ";

    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After sorting the array elements are: ";
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}