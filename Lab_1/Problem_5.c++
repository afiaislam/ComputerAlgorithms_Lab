// To add two Matrices.

#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;
    cout << "Enter the Row size of a matrices: ";
    cin >> row;
    cout << "Enter the column size of a matrices: ";
    cin >> column;

    int mat1[row][column];
    int mat2[row][column];
    int sum[row][column];

    cout << "Enter the elements of 1st matrices: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "1st matrices: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the elements of 2nd matrices: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << "2nd matrices: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of two matrices: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}