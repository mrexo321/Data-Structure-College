#include <iostream>
#include <stdio.h>
#define size 5
using namespace std;
int main()
{
    int matrix[size][size];
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            matrix[i][j] = j + 1;
        }
    }
    cout << "Matrix segitiga : \n";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j >= i)
            {
                cout << matrix[i][j];
            }
            else
            {
                printf("\t");
            }
        }
        cout << "\n";
    }
    return 0;
}
