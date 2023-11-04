#include <stdio.h>

int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{

    int sum = 0;
    int primary_diagonal = 0;
    int secondary_diagonal = 0;

    for (int i = 0; i < arr_rows; i++)
    {
        for (int j = 0; j < arr_columns; j++)
        {

            if (i == j) // primary diagonal -> misal: baris 1 = kolom 1, baris 2 = kolom 2, baris 3 = kolom 3
            {
                primary_diagonal += arr[i][j];
            }

            if (i + j == arr_rows - 1) // secondary diagonal
            {
                secondary_diagonal += arr[i][j];
            }
        }
    }

    sum = primary_diagonal - secondary_diagonal;

    if (sum < 0)
    {
        sum = -sum;
    }

    printf("sum: %d", sum);

    return sum;
}

int main()
{

    int rows = 3;
    int columns = 3;

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    diagonalDifference(rows, columns, matrix);

    return 0;
}