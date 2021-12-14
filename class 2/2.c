#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], r, c, k = 1, i, j, s = 0;
    printf("enter the row : ");
    scanf("%d", &r);
    printf("enter the column : ");
    scanf("%d", &c);
    printf("enter the elements : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
                s = s + 1;
        }
    }
    int l = r * c - s;
    int tup[l + 1][3];
    tup[0][0] = r;
    tup[0][1] = c;
    tup[0][2] = l;
    if (s > (r * c) / 2)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != 0)
                {
                    tup[k][0] = i;
                    tup[k][1] = j;
                    tup[k][2] = a[i][j];
                    k++;
                }
            }
        }
        printf("\n3d tuple format representation\n");
        for (i = 0; i < l + 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", tup[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("no it is not a sparse matrix");
    }
    return 0;
}