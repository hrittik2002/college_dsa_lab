/**
 * 9.	Write a C program to find the transpose of a sparse matrix.
*/

#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // asssigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    int count0 = 0, countNon0 = 0;
    // printing the matrix a[][]
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (a[i][j] == 0)
            {
                count0++;
            }
            else
            {
                countNon0++;
            }
            if (j == c - 1)
                printf("\n");
        }

    if (count0 > countNon0)
    {
        printf("It is a sparse matrix \n");
        // computing the transpose
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
            {
                transpose[j][i] = a[i][j];
            }

        // printing the transpose
        printf("\nTranspose of the matrix:\n");
        for (int i = 0; i < c; ++i)
            for (int j = 0; j < r; ++j)
            {
                printf("%d  ", transpose[i][j]);
                if (j == r - 1)
                    printf("\n");
            }
    }
    else
    {
        printf("It is not a sparse matrix");
    }

    return 0;
}