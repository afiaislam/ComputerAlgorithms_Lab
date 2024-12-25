// The longest common subsequence in C++

#include<iostream>
using namespace std;

void lcsAlgo(char *S1, char *S2, int m, int n)
{
    int LCS_table[m + 1][n + 1];

    // Building the mtrix in bottom-up way
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCS_table[i][j] = 0;
            else if (S1[i - 1] == S2[j - 1])
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
            else
                LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
        }
    }

    int index = LCS_table[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            lcsAlgo[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }

    // Printing the sub sequences
    cout << "S1 : " << S1 << "\nS2 : " << S2 << "\nLCS: " << lcsAlgo << "\n";
}
int main()
{
    int m;
    cout<<"Enter the length of 1st sequence: ";
    cin>>m;
    char S1[m];
    cout<<"Enter the characters of 1st sequence: ";
    for(int i=0;i<m;i++){
        cin>>S1[i];
    }
    int n;
    cout<<"Enter the length of 2nd sequence: ";
    cin>>n;
    char S2[n];
    cout<<"Enter the characters of 1st sequence: ";
    for(int i=0;i<n;i++){
        cin>>S2[i];
    }

    lcsAlgo(S1, S2, m, n);
}