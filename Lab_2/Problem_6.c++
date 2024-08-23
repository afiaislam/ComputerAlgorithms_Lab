// To find a prime number within a range.


#include <iostream>
using namespace std;

int isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n1, n2;
    cout << "Enter the 1st number: ";
    cin >> n1;
    cout << "Enter the last number: ";
    cin >> n2;

    cout << "The prime number between " << n1 << " and " << n2 << " are: ";
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}