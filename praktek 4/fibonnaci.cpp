#include <iostream>

using namespace std;

int main()
{
    int n;
    int n1 = 0;
    int n2 = 1;
    int nextNumber = 0;

    cout << "Enter Numbers : ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if (i == 1)
        {
            cout << n1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << n2 << ", ";
            continue;
        }
        nextNumber = n1 + n2;
        n1 = n2;
        n2 = nextNumber;

        cout << nextNumber << ", ";
    }
    return 0;
}