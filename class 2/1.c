/**
 * 7.	Write a C program to store the elements in a 2D array and display it &represent it in row major order & display it.
*/

#include <stdio.h>

int main(){

    int m , n;
    printf("Enter the total number of rows : ");
    scanf("%d",&m);
    printf("Enter the total number of column : ");
    scanf("%d",&n);

    int arr[m][n];

    printf("Enter all the elements : ");

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("Row-Major Order: ");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        
    }
    return 0;
}