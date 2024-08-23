#include <iostream>
using namespace std;

void display_mat(int m, int n)
{
    int mat[m][n];

    cout << "Enter the elements of matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "The matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter the size of Row: ";
    cin >> m;
    cout << "Enter the size of Column: ";
    cin >> n;

    display_mat(m, n);

    return 0;
}