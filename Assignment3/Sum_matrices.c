#include <stdio.h>

void sum_matrix(int a[2][2], int b[2][2])
{
    int result[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            result[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    //For testing manual:
    
    // int a[2][2] = {1, 2, 3, 4};
    // int b[2][2] = {1, 2, 3, 4};
    int matrix1[2][2];
    int matrix2[2][2];
    // if we want the user to enter the matrix
        
    printf("Enter values for matrix 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for %c%d%d: ", 'a' + i, i + 1, j + 1);
            scanf("%d",&matrix1[i][j]); 
        }
    }

    // Input for matrix 2
    printf("\nEnter values for matrix 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for %c%d%d: ", 'a' + i, i + 1, j + 1);
            printf("Enter value for %c%d%d: ", 'a' + i, i + 1, j + 1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    
    
    
    sum_matrix(matrix1,matrix2);




    return 0;
}
