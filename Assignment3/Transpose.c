#include "stdio.h"





int main()
{
    int rows,col;
    
    printf("Please Enter the number of rows: \n");
    scanf("%d",&rows);
    printf("Please Enter the number of cols: \n");
    scanf("%d",&col);
    int result[col][rows];
    int matrix1[rows][col];
     printf("Enter values for matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter value for %c%d%d: ", 'a' + i, i + 1, j + 1);
            scanf("%d",&matrix1[i][j]); 
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {

            result[j][i] =matrix1[i][j] ;
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}