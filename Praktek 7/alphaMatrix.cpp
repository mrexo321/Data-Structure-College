#include <iostream>
#define rows 3
#define cols 3
using namespace std;
void printMatrix(char matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    char matrix[rows][cols];
    char alphabet = 'A';
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = alphabet;
            alphabet++;
        }
    }

    printMatrix(matrix);
    return 0;
}
