#include <iostream>
#define rows 3
#define cols 3
using namespace std;
int main()
{
    int matrix[rows][cols];
    int i, j;
    printf("Masukan elemen matriks : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Matrix [%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    cout << "Matrix yang dimasukan : \n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << matrix[i][j];
        }
        cout << "\n";
    }
    return 0;
}
